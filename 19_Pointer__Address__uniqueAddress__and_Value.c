
#include <stdio.h>


int main(){
  
    int value =99;
    // pointer take same address of value
    int *ptr = &value;
    printf("value of val: %d address of val %p\n", value, &value);
    // &ptr:   print own address that is diffrent then val
    // *ptr: Dereference and return value that it is pointing to  10
    printf(" ptrVal: %p unique address of ptrVal %p value of ptrVal %d",  ptr, &ptr, *ptr);

}
