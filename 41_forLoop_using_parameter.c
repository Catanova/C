

#include "stdio.h"
#include "stdlib.h"  // malloc , calloc

#include "string.h" // strcmp, strcpy, strcat



void character_counter( char *string);


int main (){

    
    char *ptr = "hello";
    char ptr1[] = {'1','w'};
    char **ptr2 = ptr;
    //char **ptr3 = ptr + ptr1;

    printf("ptr character are: ");
    character_counter (ptr);

    
    printf("ptr1 character are: ");
    character_counter (ptr1);

    printf("ptr2 character are: ");
    character_counter (ptr2);

} // end of main

// function count string character 

void character_counter( char *string){

    char *ptr;
    int count =0;
    char my_char;

    for (ptr = string; *ptr != '\0'; ptr++){

            count ++;
    }
    printf("%d\n", count);

}// en of character_counter
