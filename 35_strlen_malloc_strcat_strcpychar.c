#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 200

char * getFullName(char * first, char * last){
 char * fullName;
 int totlenght = strlen(first);
 totlenght++; // black spaces

 totlenght += strlen(last);
 totlenght++; // add null chararcter at the end

 fullName = malloc( totlenght * sizeof(char ));

 strcpy(fullName, first);
 strcat(fullName, " ");
 strcat(fullName, last);
 return fullName;


}

int main(void) {


  char * jack = getFullName("Jack" ,"Smith");
  printf("jack full name is %s\n", jack);
  free(jack);
  return 0;
}