// Exercise_02_19_arithmetic_largest_smallest.c
// This program inputs three integers and prints the sum, average, product, smallest and largest values.
#include <stdio.h>

int main( void )
{
	int x, y, z; // Declare variables

	printf( "Enter three different integers: " ); // Prompt user
	scanf( "%d %d %d", &x, &y, &z ); // Read integers

	printf( "Sum is %d\n", x + y + z ); // Print sum
	printf( "Average is %d\n", ( x + y + z ) / 3 ); // Print average
	printf( "Product is %d\n", x * y * z ); // Print product

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

} 