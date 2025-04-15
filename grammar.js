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
        $.condition,
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

    condition: ($) => choice($.if_fail),

    if_fail: ($) =>
      seq(
        "IF",
        "FAIL",
        $._statement,
        $._whitespace,
        repeat(seq($._statement, $._whitespace)),
        "ENDIF",
      ),

    _file_statement: ($) =>
      choice(
        $.rrm_statement,
        $.copy_statement,
        $.redirfile_statement,
        $.loadexec_statement,
      ),
    rrm_statement: ($) => seq("RRM", $.parameter),
    copy_statement: ($) => seq("COPY", $.parameter, $.parameter),
    redirfile_statement: ($) => seq("REDIRFILE", $.parameter, $.parameter),
    loadexec_statement: ($) => seq("LOADEXEC", repeat1($.parameter)),

    add_widget_statement: ($) => seq("ADDWIDGET", repeat1($.parameter)),
    exit_statement: ($) => seq("EXIT", $.parameter),
    set_statement: ($) => seq("SET", $.string_literal, $.parameter),
    message_statement: ($) => seq("MESSAGE", $.parameter),
    echo_statement: ($) => seq("ECHO", $.parameter),
    return_statement: ($) => seq("RETURN", $.parameter),
    goto_statement: ($) => seq("GOTO", $.parameter),

    parameter: ($) =>
      choice($.variable_literal, $.string_literal, $.int_literal),
    label: ($) => seq(":", /[A-Z_0-9]+/),

    string_literal: ($) =>
      seq('"', repeat(choice(/[^"$]*/, $.variable_literal)), '"'),
    int_literal: ($) => /-?[0-9]+/,

    _whitespace: ($) => repeat1(/[\n\r]/),
    _horizontal_whitespace: ($) => /[ \t]+/,
  },
});
