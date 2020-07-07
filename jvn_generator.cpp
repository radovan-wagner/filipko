#include <stdio.h>
#include <string.h>
#include "jvn_generator.hpp"

long msm( unsigned int dlzka, unsigned int seed )
{
    char            mocnina[ MAX_DLZKA_CISLA*2+1 ];
    char            seed[ MAX_DLZKA_CISLA+1 ];
    char            cislo[ MAX_DLZKA_CISLA+1 ];
    unsigned long   vysledok=0;
    
    if( dlzka > MAX_DLZKA_CISLA )
        return( ERR_OVERFLOW );

    sprintf( mocnina, "%ld", seed*seed  );
    sscanf( "%d",      &vysledok );



    
    
}