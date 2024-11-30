<h4>Explain the steps involved in setting up a C++ development environment : </h4>

<b> 1. Install a Text Editor or IDE : </b>

- Choose an Integrated Development Environment (IDE) or text editor suited for C++ development. Popular choices include:

- Visual Studio (Windows): Full-featured IDE with advanced debugging tools.

- Code::Blocks: Lightweight and beginner-friendly IDE.
CLion: Feature-rich IDE from JetBrains (requires subscription or free student license).

- Visual Studio Code: Lightweight text editor with extensions for C++.

- Eclipse CDT: Eclipse IDE with C++ Development Tooling plugin.

<b>2. Install a C++ Compiler :</b>

- A compiler is essential to convert your C++ code into an executable program. Options include:

- GCC (GNU Compiler Collection): Open-source compiler for Windows, macOS, and Linux.

- Clang: Modern compiler with advanced features.
Microsoft C++ Compiler (MSVC): Bundled with Visual Studio for Windows development.

- Windows: Use MinGW-w64 or Cygwin to install GCC. Alternatively, install Visual Studio for MSVC.

- Linux: GCC or Clang can be installed via the package manager (e.g., sudo apt install g++ for Ubuntu).

 - macOS: Install Xcode Command Line Tools (xcode-select --install) to get Clang.

<b>3. Configure Build Tools :</b>

Make or CMake:
- Install Make or CMake to manage builds efficiently, especially for larger projects.
- CMake works across platforms and generates build files for different environments.

<b>4. Set Up Debugging Tools :</b>

Most IDEs include built-in debugging tools, but ensure debugging support is configured:

- Visual Studio: Comes with a powerful debugger.

- GDB (GNU Debugger): Works well with GCC and is commonly used on Linux and macOS.
- LLDB: Works with Clang.

<b>5. Install Additional Libraries : </b> 

- Install libraries you need for your project

<b>6. Configure the Environment:</b>

Set Environment Variables:

- Add the compiler's bin directory to the system’s PATH (if necessary).
For example, for GCC, add the path to gcc.exe or g++ to your PATH.
- Install Extensions (for text editors like VS Code):
C++ IntelliSense, Syntax Highlighting, and Debugging extensions.