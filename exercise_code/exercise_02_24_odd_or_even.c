// Exercise_02_24_odd_or_even.c
// The program reads an integer, determines whether it is odd or even, and then prints it out
#include <stdio.h>

int main( void )
{
	int number; // Declare variable
	
	printf( "Enter an integer: " ); // Prompt user
	scanf( "%d", &number ); // Read integer
	
	if ( number % 2 == 0 ) {
		printf( "%d is even\n", number ); // Print even
	}
	
	if ( number % 2 != 0 ) {
		printf( "%d is odd\n", number ); // Print odd
	}
	
} 