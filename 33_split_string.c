
#include <stdio.h>
#include <string.h>



int main()
{
    
    char myString []= "University of Texas at San Antonio.";
   
    int string_length = strlen(myString);
    // myString contain empty space between string and delimitation must be empty string
    char delimitation_1 [] = " ";
  
    char *ptr_1 = strtok(myString, delimitation_1);



    while (ptr_1!= NULL){

        printf("%s \n", ptr_1);
        ptr_1 = strtok(NULL, " ");
    }
  

    int i=0;
    //Convert the character to integer and printing ascii values
    for (; i< string_length; ++i){
        printf("%d ", myString[i]);
    }
    printf("\n");


    

  
    return 0;
}
