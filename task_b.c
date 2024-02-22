#define _USE_MATH_DEFINES
#include <math.h>

#include <stdio.h>
int main(void){
    double height = 0;
	double volume = 0;
	double radius = 0;
	printf("Enter height: ");
	scanf("%lf", &height);
	
	
	// Your code below here
	height = 10; //meters
	radius = 2.2; // meters
	volume = radius*radius*height*M_PI; // cubic meters
	
	// Do not edit below here
	printf("Volume: %.2f", volume);
	return 0;
}