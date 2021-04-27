#include <stdlib.h>
#include <stdio.h>

int main(){

    // use break to end the loop early
    int i=0;
    int num_loop;
    int max=10;

    printf("Enter number of time you want to loop:");
    scanf(" %d", &num_loop);
    for(i=0;i<max;i++){
        printf(" i = %d\n", i);

        if(i == num_loop){
            break;
        }
    }
    return 0;
}