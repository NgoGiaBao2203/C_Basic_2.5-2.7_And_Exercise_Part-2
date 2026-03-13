// Exercise_02_18_comparing_integer.c
// This program asks the user to enter two integers and prints the larger number followed by the words “is larger.” 
// If the numbers are equal, it prints "These numbers are equal."
#include <stdio.h>

int main( void )
{
	int x, y;
	
	printf( "Enter two integers: " ); // Prompt user
	scanf( "%d %d", &x, &y ); // Read integers
	
	if ( x > y ) {
		printf( "%d is larger\n", x );
	}

	if ( y > x ) {
		printf( "%d is larger\n", y );
	}

	if ( x == y ) {
		printf( "These numbers are equal\n" );
	}

} 