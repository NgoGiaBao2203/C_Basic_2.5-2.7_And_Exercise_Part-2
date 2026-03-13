// Exercise_02_30_separating_digits.c
// This program separates the digits of a five-digit number
#include <stdio.h>

int main( void )
{
	int number; 
	
	printf( "Enter a five-digit number: " ); // Prompt user
	scanf( "%d", &number ); // Read number
	
	// Print separated digits
	printf( "%d   %d   %d   %d   %d\n", 
	number / 10000,         
	number % 10000 / 1000, 
	number % 1000 / 100, 
	number % 100 / 10, 
	number % 10 ); 
} 