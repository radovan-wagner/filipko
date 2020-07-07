#include <stdio.h>
#include "jvn_generator.hpp"

int main( int argc, const char *argv[], const char *env[] )
{
     int             i=0;

    while( i++ < 10 )
    {
        sprintf( cislo, "%ld", jvn_generator( 4, 1234 ) );

    }
    printf( "MAX_DLZKA_CISLA = %d\n", MAX_DLZKA_CISLA );
    return( 0 );
}