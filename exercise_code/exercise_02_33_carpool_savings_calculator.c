// Exercise_02_33_carpool_savings_calculator.c
// This program calculates the daily driving cost.
#include <stdio.h>

int main( void )
{
	int miles, costPerGallon, milesPerGallon, parkingFees, tolls, fuelUsed, fuelCost, totalCost;

	printf( "Enter total miles driven per day: " );
	scanf( "%d", &miles);

	printf( "Enter cost per gallon of gasoline: " );
	scanf( "%d", &costPerGallon );

	printf( "Enter average miles per gallon: " );
	scanf( "%d", &milesPerGallon );

	printf( "Enter parking fees per day: " );
	scanf( "%d", &parkingFees );

	printf( "Enter tolls per day: " );
	scanf( "%d", &tolls );

	fuelUsed = miles / milesPerGallon;
	fuelCost = fuelUsed * costPerGallon;
	totalCost = fuelCost + parkingFees + tolls;

	printf( "Daily driving cost is %d\n", totalCost );
} 