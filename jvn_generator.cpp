#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "jvn_generator.hpp"

unsigned long long int msm( int dlzka, unsigned long long int seed )
{
    unsigned long long int            mocnina;
    unsigned long long int   vysledok=0;
    int i;
    
    if( dlzka > MAX_DLZKA_CISLA )
        return( ERR_OVERFLOW );
		   
    vysledok=(unsigned long long int) ((seed/ pow(10.0, (double)dlzka/2))*seed);
    vysledok=vysledok%(unsigned long long int)pow(10.0,(double)dlzka);
    
    return (vysledok);  
    
}
