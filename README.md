# Tutorial C language
## Standard information (based on Head First - C by David Griffiths and Dawn Griffiths)

#### Install - linux:

`$ sudo apt install build-essential` -> install essential components like gcc, g++, etc.

`$ gcc --version` -> to validate that the GCC compiler is successfully installed.

#### Install - Windows:

Download MinGW at [MinGW source forge](https://sourceforge.net/projects/mingw/files/)

Install .exe file

after installation go to installation folder and copy the path (usually `C:\MinGW\bin`)

go to windows **control panel > system > advaced system settings > Environment variables >**

than search for path in system variables pannel

edit this by clicking in **edit...** and then **New** buttons. 

add the path to MinGW compiler (usually `C:\MinGW\bin`)

then **ok** > **ok** > **ok**.

you can test this installation on windows prompt by `$ gcc --version`.
________________________________________________________________________________________________________

#### Basic run - Windows:

`gcc -o a.exe 'program_name'.c` generates 'a.exe' running program by gcc compiler.

`a.exe` run 'a.exe' executable.

`gcc -o a.exe 'program_name'.c && a.exe` generates and run 'a.exe' at same time.

#### Basic run - linux:

`gcc -o a.out 'program_name'.c` generates 'a.out' running program by gcc compiler.

`./a.out` run 'a.out' on linux.

`gcc -o a.out 'program_name'.c && ./a.out` generates and run 'a.out' at same time.

NOTE: for link libraries use `gcc -o a.out 'program_name'.c -lm && ./a.out`


#### Run on Visual Studio Code:

> terminal > Configure Tasks...

```
 { "version": "2.0.0",

    "tasks": [
    
        {
            "label": "geral build",
            
            "type": "shell",
            
            "command": **"gcc"**,
            
            "args": [
            
                **"-o","a.out","${fileBasename}","&&","./a.out"**
            ],
            
            "group": {
            
                "kind": "build",
                
                "isDefault": true
                
            }
            
        }
        
    ]}
```
 

where `"command": "gcc",` indicates the compiler and `"-o","a.out","${fileBasename}","&&","./a.out"` the `-o a.out 'program_name'.c && ./a.out` the remaining sentence.

`${fileBasename}` allows the usage of any .c file when executed. 

to execute the program on Visual Studio Code go to:

> Terminal > Run Build Task...

________________________________________________________________________________________________________

you can use also:

`${workspaceFolder}` - the path of the folder opened in VS Code

`${workspaceFolderBasename}` - the name of the folder opened in VS Code without any slashes (/)

`${file}` - the current opened file

`${relativeFile}` - the current opened file relative to workspaceFolder

`${fileBasename}` - the current opened file's basename

`${fileBasenameNoExtension}` - the current opened file's basename with no file extension

`${fileDirname}` - the current opened file's dirname

`${fileExtname}` - the current opened file's extension

`${cwd}` - the task runner's current working directory on startup

`${lineNumber}` - the current selected line number in the active file

`${selectedText}` - the current selected text in the active file

`${execPath}` - the path to the running VS Code executable

[source - VS CODE](https://code.visualstudio.com/docs/editor/variables-reference)
