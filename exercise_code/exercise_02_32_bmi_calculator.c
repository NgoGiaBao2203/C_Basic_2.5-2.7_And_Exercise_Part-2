// Exercise_02_32_bmi_calculator.c
// This program calculates body Mass nndex (BMI) using pounds and inches
#include <stdio.h>

int main( void )
{
	int weight, height, bmi; 
	
	printf( "Enter weight in pounds: " ); 
	scanf( "%d", &weight); // User input weight
	
	printf( "Enter height in inchers: " );
	scanf( "%d", &height); // User input inchers
	
	bmi = ( weight * 730 ) / ( height * height ); // Calculate BMI
	
	printf( "BMI is %d\n", bmi ); // Print BMI
	
	printf( "\nBMI VALUES\n" );
	printf( "Underweight: less than 18.5\n" );
	printf( "Normal: between 18.5 and 24.9\n" );
	printf( "Overweight: between 25 and 29.9\n" );
	printf( "Obese: 30 or greater\n" );
} /