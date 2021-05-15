#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int i=1;
    int v=1;
    while(true)
    {
        if(i==3){       
        break;
        }

        printf("i: %d\n",i);
        i++;
    }

    while(true)
    {
        
        if(v==5){
        break;
        }
        printf("v: %d\n",v);
        ++v;
    }
    //int r =NULL;
    //printf("r:%d\n", r);
return 0;
}