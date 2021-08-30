#include "stdio.h"
#include "string.h"

union Value{

    int x; // 4 byte
    float e; // 4 bite
    char xyz[10]; // 10 byte


};

int main (){

    union Value V;

    V.x = 2;
    V.e = 9.3;
    strcpy (V.xyz, "hello..");

    printf("V.x: %d\n", V.x);
    printf("V.e:%.f\n", V.e);
    printf("V.xyz: %s\n", V.xyz);


   printf( "Memory size occupied by V : %ld\n", sizeof(V));
    printf( "Memory size V.x : %ld\n", sizeof(V.x));
    printf( "Memory size V.e : %ld\n", sizeof(V.e));
    printf( "Memory size V.xyz : %ld\n", sizeof(V.xyz));



}