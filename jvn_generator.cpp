#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "jvn_generator.hpp"

static unsigned long long int   persist_seed_data=DEFAULT_SEED;

unsigned long long int msm( int dlzka, unsigned long long int seed )
{
    unsigned long long int   vysledok;
    
    if( dlzka > MAX_DLZKA_CISLA )
        return( ERR_OVERFLOW );
		   
    vysledok = (unsigned long long int) ((seed/ pow(10.0, (double)dlzka/2))*seed);
    vysledok %= (unsigned long long int)pow(10.0,(double)dlzka);
    
    return ( vysledok );  
    
}

unsigned long long int msm( void )
{
    unsigned long long int   vysledok;
    
    if( DLZKA_CISLA > MAX_DLZKA_CISLA )
        return( ERR_OVERFLOW );
		   
    vysledok = (unsigned long long int) ((persist_seed_data/ pow(10.0, (double)DLZKA_CISLA/2))*persist_seed_data);
    vysledok %= (unsigned long long int)pow(10.0,(double)DLZKA_CISLA);
    
    persist_seed_data = vysledok;
    
    return ( vysledok );  
    
}

double msm_01( void )
{
	return( (double)msm() / pow(10.0, (double)DLZKA_CISLA) );
}

void vypln( void )
{
	int	i,j;
	suradnice	sur[100][100];
	
	for(i=0; i<100; i++)
		for(j=0; j<100; j++ )
		{
			sur[i][j].x = msm_01();
			sur[i][j].y = msm_01();
			printf( "%0f\t;\t%0f\n", sur[i][j].y , sur[i][j].y );
		}
		
}
