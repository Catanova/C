#include <stdio.h>
#include <math.h>

int main () {
  

   double num = 10.83;
   double num2 = -8.33;

   int result, result_1,result_2;
   

   // printing  double numbers as interger to skip floor function 
   result_1= num;
   result_2= num2;

    //undefined reference to `floor'
   //result = floor(num);

   //printf("Floor integer of %.2f = %d", num, result);
   printf("Floor num2 of %.2f = %d\n", num2, result_2);
   printf("Floor num of %.2f = %d\n", num, result_1);
 
   return(0);
}

