/**
 * @file Pbat grammar for tree-sitter
 * @author tech
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "pbat",

  extras: ($) => [$._horizontal_whitespace, $.comment],

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat(seq($._line, $._whitespace)),
    _line: ($) => choice($.label, $._statement),
    _statement: ($) =>
      choice(
        $.if_statement,
        $.set_statement,
        $.message_statement,
        $.echo_statement,
        $.goto_statement,
        $._file_statement,
        $.add_widget_statement,
        $.exit_statement,
        $.return_statement,
      ),
    variable_literal: ($) => seq("$", /[a-zA-Z0-9._]+/, "$"),
    comment: ($) => token(seq("#", /.*/, repeat(/[\n\r]/))),

    if_statement: ($) =>
      seq(
        "IF",
        choice($._if_fail, $._if_neq, $._if_equ, $._if_matches),
        optional($.elseif),
        "ENDIF",
      ),

    elseif: ($) =>
      seq("ELSEIF", choice($._if_fail, $._if_neq, $._if_equ, $._if_matches)),

    _if_fail: ($) =>
      seq($.fail_token, $._statement, $._whitespace, $._statement_block),
    _if_neq: ($) =>
      seq(
        $.neq_token,
        $._parameter,
        $._parameter,
        $._whitespace,
        $._statement_block,
      ),
    _if_equ: ($) =>
      seq(
        $.equ_token,
        $._parameter,
        $._parameter,
        $._whitespace,
        $._statement_block,
      ),
    _if_matches: ($) =>
      seq(
        $.matches_token,
        $.pattern_literal,
        $._parameter,
        $._whitespace,
        $._statement_block,
      ),

    fail_token: ($) => "FAIL",
    neq_token: ($) => "NEQ",
    equ_token: ($) => "EQU",
    matches_token: ($) => "MATCHES",

    _statement_block: ($) =>
      choice(repeat1(seq($._statement, $._whitespace)), $._whitespace),

    _file_statement: ($) =>
      choice(
        $.rrm_statement,
        $.copy_statement,
        $.redirfile_statement,
        $.loadexec_statement,
      ),
    rrm_statement: ($) => seq("RRM", $._parameter),
    copy_statement: ($) => seq("COPY", $._parameter, $._parameter),
    redirfile_statement: ($) => seq("REDIRFILE", $._parameter, $._parameter),
    loadexec_statement: ($) => seq("LOADEXEC", repeat1($._parameter)),

    add_widget_statement: ($) => seq("ADDWIDGET", repeat1($._parameter)),
    exit_statement: ($) => seq("EXIT", $._parameter),
    set_statement: ($) => seq("SET", $.string_literal, $._parameter),
    message_statement: ($) => seq("MESSAGE", $._parameter),
    echo_statement: ($) => seq("ECHO", $._parameter),
    return_statement: ($) => seq("RETURN", $._parameter),
    goto_statement: ($) => seq("GOTO", $._parameter),

    _parameter: ($) =>
      choice($.variable_literal, $.string_literal, $.int_literal),
    label: ($) => seq(":", /[A-Z_0-9]+/),

    string_literal: ($) =>
      seq('"', repeat(choice(/[^"$]*/, $.variable_literal)), '"'),
    pattern_literal: ($) =>
      seq(
        '"',
        repeat(choice(/[^"?*$]*/, $.pattern_wildcard, $.variable_literal)),
        '"',
      ),
    pattern_wildcard: ($) => choice("?", "*"),
    int_literal: ($) => /-?[0-9]+/,

    _whitespace: ($) => repeat1(/[\n\r]/),
    _horizontal_whitespace: ($) => /[ \t]+/,
  },
});
