// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "MQTTClient",
    platforms: [.iOS(.v8), .tvOS(.v9), .macOS(.v10_10)],
    products: [
        .library(
            name: "MQTTClient",
            targets: ["MQTTClient"]),
    ],
    dependencies: [],
    targets: [
        .target(
            name: "MQTTClient",
            dependencies: [],
            path: "MQTTClient/MQTTClient",
            exclude: ["Headers/MQTTClient-Prefix.pch", "Websocket"],
            publicHeadersPath: "Headers",
            cSettings: [
                CSetting.headerSearchPath("Headers/Min"),
                CSetting.headerSearchPath("Headers/Manager"),
            ]),
    ]
)
