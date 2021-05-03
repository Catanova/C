#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


int main(){

    int letter = 'f';
    int num = '3';

    if(isalpha(letter)){
        printf(" %c is a letter\n", letter );
    }

    if(isdigit(num)){

        printf("ascii value num: %d\n", num);
        printf("num: %c is a number\n", num);


    }
}