#include <stdio.h>
#include <stdlib.h>

#define MAX 5

/* THERE ARE TWO WAY TO REWRITE THIS FUNCTION
1- FUNCTION: use integer array
void print(int x[]){
    for(int y=0;y<MAX;y++){
        printf("index x: %d value x: %d\n", y,x[y]);
    }
}*/ 
// 2- FUNCTION: use interger pointer
void print(int *x){
    for(int y=0;y<MAX;y++){
        printf("index x: %d value x: %d\n", y,x[y]);
    }
}
// FUNCTION: use interger pointer
void initialize(int *x){
    for(int i=0;i<MAX;i++){
        // initializing all value of the array to 7
        x[i]= 7;
    }
}  
// integer pointer to a fuction  
int *  initialize_1(int * x){
    for(int i=0;i<MAX;i++){
        // initializing all value of the array to 99
        x[i]= 99;
    }
    // without return warning appears 
    return x;
} 

int * initArray(int *ptr, int val, int max){
    for(int c=0;c<max;c++){
        ptr[c]=val;
    }
    return ptr;
}
void printArray(int *ptr, int max){
    for(int c=0;c<max;c++){
        printf("index ptr: %d value ptr: %d\n", c,ptr[c]);
    }
}
int * initArray_1(int val, int max){
    int x[max];
    for (int i=0;i<max;i++){
        x[i]=val;
    }
    return x;
}

int main(){
    int a[MAX];
    print(a);
    initialize(a);
    print(a);
    initialize_1(a);
    print(a);

    int t[MAX];
    int *ptr = initArray(t,222, MAX);
    printArray(ptr,MAX);
    
    int *ptr_1 = initArray_1(222, MAX);
     printArray(ptr_1,MAX);

}
