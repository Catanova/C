
#include <stdio.h>
#include <string.h>



int main()
{
    
    char string_1[]= "Awalehdek; Moussa; Houssein";
  
    // Returning first string
    char* string_by_string = strtok(string_1, ";");
    
    // printing all string 
    while (string_by_string != NULL){
    	
    	// printing string one by one
    	printf("%s\n", string_by_string);
    	
    	// update and moving to the next string 
    	string_by_string = strtok(NULL, " ; ");
    }
  
    return 0;
}
