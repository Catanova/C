#include <stdio.h>
#include <stdlib.h>


int main()
{

    int w = 595;
    printf("%d lbs. \n", w + 12);
    printf(" %d lbs. \n", w / 12);
    printf("%d lbs. \n", w % 12);

    int a = 86;
    int b = 21;
	
	// prints only integer part of the float
    printf("%d \n", a/b);

    float c = 86.0;
    float d = 21.0;
    // prints the entire float
    printf("%f \n", c/d);

    return 0;
}
