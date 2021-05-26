
#include <stdio.h>


int main(){
  
    int value =10;
    // pointer take same address of value
    int *ptr = &value;
    printf("value of val: %d address of val %p\n", value, &value);
    //NOTE: &ptrval print own address that is diffrent then val
    //NOTE:    // *ptrVal D reference and return value it is pointing to  10
    printf(" ptrVal: %p unique address of ptrVal %p value of ptrVal %d",  ptr, &ptr, *ptr);

}
