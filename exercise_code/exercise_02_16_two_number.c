// Exercise_02_16_two_number.c
// Program calculates the sum, product, difference, quotient and remainder.
#include <stdio.h>

int main( void )
{
	int x, y; // Declare variables
	
	printf( "Enter two integers: " ); // Prompt user
	scanf( "%d %d", &x, &y ); // Read integers
	
	printf( "Sum is %d\n", x + y ); // Print sum
	printf( "Product is %d\n", x * y ); // Print product
	printf( "Difference is %d\n", x - y ); // Print difference
	printf( "Quotient is %d\n", x / y ); // Print quotient
	printf( "Remainder is %d\n", x % y ); // Print remainder
} 
