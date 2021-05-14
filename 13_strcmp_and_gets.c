
#include <stdio.h>
#include<string.h>

int main()
{
    char strg1[50], strg2[50];

    printf("Enter first string: ");
    gets(strg1);

    printf("Enter second string: ");
    gets(strg2);

    if(strcmp(strg1, strg2)==0)
    {
        printf("\nYou entered the same string two times.\n");
    }

    else
    {
        printf("\nEntered strings are not same!\n");
    }



    char strg3[50], strg4[50];

    printf("Enter first string: ");
    gets(strg3);

    printf("Enter second string: ");
    gets(strg4);

    if(!strcmp(strg3, strg4)==0)
    {
        
        printf("\nEntered strings are not same!\n");
    
    }

    else
    {
        printf("\nYou entered the same string two times.\n");
        
    }

    // signal to operating system program ran fine
    return 0;
}