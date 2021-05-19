#include <stdio.h>
#include <math.h>

int main () {
   float cal1, cal2, cal3, cal4, cal5, cal6;

   cal1 = 1.6;
   cal2 = 1.2;
   cal3 = 2.8;
   cal4 = 2.3;
   cal5 = 0.3;
   cal6 = 0.03;

   printf ("value1 = %.1f\n", ceil(cal1));
   printf ("value2 = %.1lf\n", ceil(cal2));
   printf ("value3 = %.1lf\n", ceil(cal3));
   printf ("value4 = %.1lf\n", ceil(cal4));
   printf ("value5 = %.1lf\n", ceil(cal5));
   printf ("value6 = %.1lf\n", ceil(cal6));
   
   return(0);
}
