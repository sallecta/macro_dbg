# About macro_dbg
Print "debug" messages by calling macro_dbg("some text and parameters for printf function").  
If macro_dbg_enable is defined it works, else macro_dbg(...) does nothing.  
https://github.com/sallecta/macro_dbg

## Usage
### Enable macro_dbg printing
Define macro_dbg_enable, include macro_dbg.h in your C code, use it as macro_dbg("some text"). For example:
```c
#define macro_dbg_enable
#include "macro_dbg.h"
macro_dbg("Hello, macro_dbg!\n");
```

### Disable macro_dbg
Just undefine (comment) macro_dbg_enable definition:
```c
//#define macro_dbg_enable
#include "macro_dbg.h"
macro_dbg("Hello, macro_dbg!\n");
```

### Limitations (unexpected behaviour in compare of printf() function)
New line chars at the beggining of macro_dbg() arguments devides output line to 2 lines separated by given number of "\n"s.
Example:
```c
macro_dbg("\n some text\n");
```
Expectation:
```console
_line_break_
fileName.c/functionName[10]: message text
```
Reality:
```console
fileName.c/functionName[10]:_line_break_ 
message text
```

## Output format
```console
fileName.c/functionName[LineNumber]: message text
```
