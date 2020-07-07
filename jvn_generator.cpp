#include <stdio.h>
#include <string.h>
#include <math.h>
#include "jvn_generator.hpp"

long msm( unsigned int dlzka, unsigned int seed )
{
    char            mocnina[ MAX_DLZKA_CISLA*2+1 ];
    char            cislo[ MAX_DLZKA_CISLA+1 ];
    long   vysledok=0;
    int i;
    
    if( dlzka > MAX_DLZKA_CISLA )
        return( ERR_OVERFLOW );

    sprintf( mocnina, "%016ld", seed*seed  );
    vysledok=(long)(mocnina\(long)pow(10.0,(double)(dlzka/2)));
    
    return (vysledok);  
    
}
