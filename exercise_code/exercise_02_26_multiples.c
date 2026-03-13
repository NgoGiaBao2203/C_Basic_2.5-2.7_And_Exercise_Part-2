// Exercise_02_26_multiples.c
// This program reads two integers and determines whether the first is a multiple of the second.
#include <stdio.h>

int main( void )
{
	int x, y; 
	
	printf( "Enter two integers: " ); // Prompt user
	scanf( "%d %d", &x, &y ); // Read integers
	
	// The first number is multiple of the second number
	if ( x % y == 0 ) {
		printf( "%d is a multiple of %d\n", x, y );
	}
	
	// The first number is not a multiple of the second number
	if ( x % y != 0 ) {
		printf( "%d is not a multiple of %d\n", x, y ); 
	}
	
} 