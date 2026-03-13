// Exercise_02_29_character_integer_value.c
// This program prints the integer equivalents of some characters.
#include <stdio.h>

int main( void )
{
	// Uppercase letters
	printf( "A = %d\n", 'A' );
	printf( "B = %d\n", 'B' );
	printf( "C = %d\n", 'C' );

	// Lowercase letters
	printf( "a = %d\n", 'a' );
	printf( "b = %d\n", 'b' );
	printf( "c = %d\n", 'c' );
	
	// Numbers (digits) 
	printf( "0 = %d\n", '0' );
	printf( "1 = %d\n", '1' );
	printf( "2 = %d\n", '2' );
	
	// special symbols
	printf( "$ = %d\n", '$' );
	printf( "* = %d\n", '*' );
	printf( "+ = %d\n", '+' );
	printf( "/ = %d\n", '/' );
	
	// Blank character
	printf( "blank = %d\n", ' ' ); 

} 