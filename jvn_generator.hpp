#ifndef __JVN_GENERATOR
#define __JVN_GENERATOR

    #include <math.h>
    // #define MAX_DLZKA_CISLA (unsigned int)(log10((double)(  pow( 2.0, (double)(sizeof(long)*8-1.0))))/2.0)

    #define MAX_DLZKA_CISLA 12
    #define DLZKA_CISLA 8
    #define DEFAULT_SEED 99792961
    #define ERR_OVERFLOW 0
    
   typedef struct
    {
    	double	x, y;
	} suradnice;
	
	void vypln( void );			
    unsigned long long int msm( int dlzka, unsigned long long int seed );   // Neumanova metoda stredu mocniny
    unsigned long long int msm( void );      								// Neumanova metoda stredu mocniny - berie DLZKU_CISLA z konstanty a SEED_DATA zo statickej premennej
	double msm_01( void );													// Neumanova metoda stredu mocniny normalizovana na interval <0..1>
#endif
