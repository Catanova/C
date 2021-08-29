#include "stdio.h"
#include "stdlib.h"
int main()
{
   char xyz[] = "648892";
   long int num = atol (xyz);
   printf("num: %ld \n",  num );
   char xyz1 [] = "90.57";
   float num1 = atof(xyz1);
   //%.2f print flot with two decimail number 
   printf("num1: %.2f\n", num1);
   
   char xyz2 [] = "239.53425378998";
   double num2 = atof(xyz2);

   //%.11f print float with 11 decimail number 
   printf("num1: %.11f\n", num2);



}