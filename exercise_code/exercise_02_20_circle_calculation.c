// Exercise_02_20_circle_calculations.c
// This program reads the radius of a circle and prints the diameter, circumference and area 
// Using the constant value 3.14159 for pi
#include <stdio.h>

int main( void )
{
	int radius; // Declare varitable 
	
	printf( "Enter the radius: " ); // Prompt user
	scanf( "%d", &radius ); // Read radius
	
	printf( "Diameter is %f\n", 2.0 * radius ); // Print diameter
	printf( "Circumference is %f\n", 2.0 * 3.14159 * radius ); // Print circumference
	printf( "Area is %f\n", 3.14159 * radius * radius ); // Print area
} 