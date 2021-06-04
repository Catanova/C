#include <stdio.h>


int main()
{
  
  
  int a = 5;
  char v = 'v';
// check the memory address
printf("address a = %d\n", &a); // printing memory address of a
printf("value a = %d\n", a); // printing value of a"


printf("ascii value of v = %u\n", v); // printing "ascii value of v = 118"
printf("address v = %u\n", &v); // printing "address v"
printf("character v = %s\n", &v); // printing letter v


  return 0;
}
