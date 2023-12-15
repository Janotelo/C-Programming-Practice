# C-Programming-Practices
My self-study journey in C and C++ programming languages. Probably a recap/review of coding in C/C++ for the past course where we studied this language as a computer engineering student.

### Initial Pre-requisites
- GCC *(for C compiler)*  
  
Download and configure:
1. Download GCC [here](https://winlibs.com/#download-release).
2. Extract the downloaded file and move it to your chosen directory *(C:\mingw64)*.
3. Edit environment variables and add C:\mingw64\bin to PATH.
4. Check if working, enter `gcc --verion` in cmd to show GCC version. If not showing anything, try restart your device or re-run the steps.  
  
Configure VS Code and check if it works:  
1. Create a c code.
2. Click `Terminal > Configure Default Build Task...` and then on the input bar hit `C/C++: gcc.exe build active file`.
3. Right click the code and hit `Run Code`.
4. Check for Output below.

- Visual Studio Code *(as main IDE)*  
Install the following VSCode Extensions:
1. C/C++ *(C/C++ IntelliSense, debugging, and code browsing)*.
2. Code Runner *(Run C, C++, etc.)*.