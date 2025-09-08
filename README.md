# uvConvertor-CLI.exe的使用方法
* uvConvertor-CLI.exe是一个将Keil uVision项目文件(.uvprojx)转换为compile_command.json文件的命令行工具。提供给Vscode和Clangd用于代码提示，不具备编译功能。
~~~bash

uvConvertor-CLI.exe -f <path to .uvprojx file> -o <output path> [-e] <external options>

~~~