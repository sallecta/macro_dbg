#ifndef macro_dbg_h

    #define macro_dbg_h

    #ifdef macro_dbg_enable

        #include <string.h>
        #define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
        #define macro_dbg(...) printf("\n");printf("%s/%s[%d]: ",__FILENAME__,__FUNCTION__,__LINE__);printf(__VA_ARGS__)

    #else //macro_dbg_enable

        #define macro_dbg(...) // accept everything, do nothing

    #endif // macro_dbg_enable

#endif // macro_dbg_h
