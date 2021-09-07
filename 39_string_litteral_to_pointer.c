#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
  char str[] = "Texas, Austin Dallas Houston San Antonio";
  // +1 is for null terminator '\0'
	char *result = (char *)malloc(strlen(str)+1);
	char *tmp = result;
	int index=0;
	// look break at the end of the string str
	while(index <= strlen(str)){
  		*result = str[index];
  		result++;
  		index++;
		}
	printf("%s\n", tmp);
}
