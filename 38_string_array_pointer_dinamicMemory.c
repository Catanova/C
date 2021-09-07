#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int Manipulation (char *xtr1, char* xtr2, char* xtr3){
    char *xtr = (char*)malloc(sizeof(char)*60);
    strcpy(xtr,"Foo - TEST");
    xtr1 = xtr; // Copy address to pointer
    strcpy(xtr2,xtr); // Copy string to char array
    strcpy(xtr3,xtr); // Copy string to char pointer
    return 0;
}

int main() {
    char* xtr1; // Initial char pointer
    char xtr2[10]; // Initial char array
    char* xtr3 = (char*)malloc(sizeof(char) * 10); // allocate memory for the pointer
    Manipulation(xtr1, xtr2, xtr3);
    printf("xtr1: %s\n",xtr1); //  string 1
    printf("xtr2: %s\n",xtr2); // string 2
    printf("xtr3: %s\n",xtr3); // string 3
      
    free(xtr3);
    return 0;
}
