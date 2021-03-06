#include <stdio.h>


//calc driving cost and return as double
double DrivingCost(double drivenMiles, double mpg, double dollarsPerGallon){
   return drivenMiles/mpg*dollarsPerGallon;
}

int main(void) {


   //input: car's miles/gallon and  dollars/gallon (both doubles)
   double mpg;
   double dollarsPerGallon;
   
   scanf("%lf", &mpg);
   scanf("%lf", &dollarsPerGallon);
   
   //outputs should include: 10 miles, 50 miles, and 400 miles
   
   printf("%lf ", DrivingCost(10.0, mpg, dollarsPerGallon));
   printf("%lf ", DrivingCost(50.0, mpg, dollarsPerGallon));
   printf("%lf\n", DrivingCost(400.0, mpg, dollarsPerGallon));

   return 0;
}
