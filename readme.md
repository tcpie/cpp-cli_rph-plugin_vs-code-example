# About
This is some example code to show how a plugin for [Rage Plugin Hook](https://ragepluginhook.net/), written in [C++/CLI](https://en.wikipedia.org/wiki/C%2B%2B/CLI), can be built using [Visual Studio Code](https://code.visualstudio.com/).

It is necessary to compile using Visual Studio Code, instead of Visual Studio, as the latter crashes when a reference to the RagePluginHookSDK.dll is added to a C++/CLI project.

# Requirements
* Visual Studio Code
* [Visual Studio Code configured for Microsoft C++](https://code.visualstudio.com/docs/cpp/config-msvc)

# Known issues
* Need to write '#using "RagePluginHookSDK.dll"' in each compilation unit to have intellisense ([bug resurfaced?](https://github.com/microsoft/vscode-cpptools/issues/5819)).
* VS Code does not show RPH documentation, even when RagePluginHookSDK.xml is placed in the project directory.


# License
The code is placed in the public domain.

Rage plugin hook was developed by MulleDK19 and LMS.

