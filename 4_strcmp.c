#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char str1[] = "abcd", str2[]= "abCd", str3[] = "abcd";
    int result, result_1;

    //comparing stringd str1, str2
    result = strcmp(str1,str2);
    printf("strcmp(str1,str2):%d\n", result);

    //comparing stringd str1, strr
    result_1 = strcmp(str1,str3);
    printf("strcmp(str1,str3):%d\n", result);

    // without out string.h file we get the warning below in the output
    // strcmp.c:11:14: warning: implicit declaration of function 'strcmp' [-Wimplicit-function-declaration]
   //11 |     result = strcmp(str1,str2);
   ///  |              ^~~~~~

    return 0;
}