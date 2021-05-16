#include <stdio.h>
#include <math.h>

double X_floor(double num)
{
    return (int)num;
}

double X_floor_2(double num)
{
    if(num < 0)
        return (int)num - 1;
    else
        return (int)num;
}

int main(void)
{
    double a1 = -12.5;

     //undefined reference to `floor'
    //printf("%lf\n", floor(a1));

    // make your own function to print floor
    printf("%lf\n", X_floor(a1));
    printf("%lf\n", X_floor_2(a1));

    return 0;
}

