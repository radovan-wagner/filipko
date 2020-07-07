#ifndef __JVN_GENERATOR
#define __JVN_GENERATOR

    #include <math.h>
    // #define MAX_DLZKA_CISLA (unsigned int)(log10((double)(  pow( 2.0, (double)(sizeof(long)*8-1.0))))/2.0)

    #define MAX_DLZKA_CISLA 8
    #define DEFAULT_SEED 1234
    #define ERR_OVERFLOW -1

    long msm( unsigned int dlzka, unsigned int seed );      // Neumanova metoda stredu mocniny

#endif
