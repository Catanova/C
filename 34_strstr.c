#include <stdio.h>
#include <string.h>


int main () {
  char string1[20] = "Hello World";
  char string2[10] = "World";
   char *ptr;

   ptr = strstr(string1, string2);

   printf("The substring is: %s\n", ptr);
   
   return(0);
}