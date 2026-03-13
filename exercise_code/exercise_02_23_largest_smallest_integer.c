// Exercise_02_23_largest_smallest_integers.c
// This program reads three integers and prints the largest and smallest integers in the group.
#include <stdio.h>

int main( void )
{
	int x, y, z; // Declare variables
	
	printf( "Enter three integers: " ); // Prompt user
	scanf( "%d %d %d", &x, &y, &z ); // Read integers
	
	// The largest number
	if ( x > y && x > z ) {
		printf( "Largest is %d\n", x );
	}

	if ( y > x && y > z ) {
		printf( "Largest is %d\n", y );
	}

	if ( z > x && z > y ) {
		printf( "Largest is %d\n", z );
	}

	// The smallest number
	if ( x < y && x < z ) {
		printf( "Smallest is %d\n", x );
	}

	if ( y < x && y < z ) {
		printf( "Smallest is %d\n", y );
	}

	if ( z < x && z < y ) {
		printf( "Smallest is %d\n", z );
	}

} 