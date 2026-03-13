// Exercise_02_05_product_three_integer.c
// Using the statements you wrote in Exercise 2.4
// Program calculates the product of three integer
#include <stdio.h>

// Function main begins program execution
int main( void )
{
	int x, y, z; // Declare variables
	
	printf( "Enter three integers: " ); // Prompt user
    scanf( "%d %d %d", &x, &y, &z ); // Read integers
    
    int result = x * y * z; // Assign it to the variable result
    
    printf( "The product is %d\n", result ); 
} // End function main
