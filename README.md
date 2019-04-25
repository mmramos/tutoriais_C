# Tutorial C language
## Standard information (based on Head First - C by David Griffiths and Dawn Griffiths)


#### Basic run - linux:

`gcc -o a.out 'program_name'.c` generates 'a.out' running program by gcc compiler.

`./a.out` run 'a.out' on linux.

`gcc -o a.out 'program_name'.c && ./a.out` generates and run 'a.out' at same time.


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

to execute the program on Visual Studio Code go to Terminal > Run Build Task...

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
