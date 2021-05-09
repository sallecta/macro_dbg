#include <stdio.h>
#include <stdlib.h>

#define macro_dbg_enable
#include "macro_dbg/macro_dbg.h"

int main()
{
    printf("Welcome to macro_dbg test application!\n");
    macro_dbg("Hello, macro_dbg!\n");

    int i,l;
    l=6;
    for (i=0; i<l; i++)
    {
        macro_dbg("\t %d \t of \t %d:\n",i,l);
    }
    return 0;
}
