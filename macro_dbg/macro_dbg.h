#ifndef macro_dbg_h

    #define macro_dbg_h

    #ifdef macro_dbg_enable

        #include <string.h>
        #ifdef _WIN32
            #define dirSep '\\'
        #else
            #define dirSep '/'
        #endif // WIN32
        #define __FILENAME__ (strrchr(__FILE__, dirSep) ? strrchr(__FILE__, dirSep) + 1 : __FILE__)
        #define macro_dbg(...) printf("\n");printf("%s: %s[%d]: ",__FILENAME__,__FUNCTION__,__LINE__);printf(__VA_ARGS__)

    #else //macro_dbg_enable

        #define macro_dbg(...) // accept everything, do nothing

    #endif // macro_dbg_enable

#endif // macro_dbg_h

