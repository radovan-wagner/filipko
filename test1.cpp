#include <stdio.h>
#include "jvn_generator.hpp"

int main( int argc, const char *argv[], const char *env[] )
{
     int             i=0;
     unsigned long long int             n;
     
    n=82193232;
    
    // printf("%ld\n", sizeof(unsigned long long int));
    for(i=0;i<100;i++)
	{
    printf("%08u\n", n=msm( 8, n ) );
    
    }
    
   // printf( "MAX_DLZKA_CISLA = %d\n", MAX_DLZKA_CISLA );
    return( 0 );
}
