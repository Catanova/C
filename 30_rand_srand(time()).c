
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
 
//
int main()
{
 
    // generating random number using current time.
    // without time sequence of random number remain the same
   
    srand(time(0));
    
    int i;
    for(int i = 0; i<4; i++)
        printf("i: %d ", rand());
        
    printf("\n");
    
    // it possible to use any number inside srand but sequence of random number remain the same and it is not usefull
    srand(999);
    int e;
    for(e = 0; e<4; e++)
        printf("e: %d ", rand());
 
    return 0;
}
