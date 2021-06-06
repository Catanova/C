#include <stdio.h>

int main()
{
    char aphabets;

    printf("lower case Alphabets from a to z are: \n");
    for(aphabets='a'; aphabets<='z'; aphabets++)
    {
        printf("%c ", aphabets);
    }
    printf("\n");
    
    printf("Upper case Alphabets from a to z are: \n");
    
       for(aphabets='A'; aphabets<='Z'; aphabets++)
    {
        printf("%c ", aphabets);
   
    }
    printf("\n");
  
    printf("\n");

    return 0;
}
