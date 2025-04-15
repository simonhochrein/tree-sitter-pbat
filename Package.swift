// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterPbat",
    products: [
        .library(name: "TreeSitterPbat", targets: ["TreeSitterPbat"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterPbat",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterPbatTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterPbat",
            ],
            path: "bindings/swift/TreeSitterPbatTests"
        )
    ],
    cLanguageStandard: .c11
)
