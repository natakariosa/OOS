#include <stdio.h>
#include <stdlib.h>
#include "mycommon.h"

int main( int argc, char **argv )
{
  if( argc != 2 )
  { 
    fprintf( stderr, "%s", "usage: ./mycpu <str>\n" );
    exit( -1 );  
  };

  char *str = argv[1];

  while( 1 )
  {
    printf( "%s\n", str );
    fflush( stdout );
    Spin( 1 );
 
  };
} 
