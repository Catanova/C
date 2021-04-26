#include <stdlib.h>
#include <stdio.h>

int main( ){

    int r, line =0, found=0;
    float temp, t_tot;
    char loc[30];

    FILE * ptr = fopen("fscanf.txt", "r");
    if(ptr==NULL){
        printf("Error while reading file.\n");
    }


    while ( fscanf(ptr, "%f %s", &temp, loc)==2){
        line++;

        printf("distance: %.1f city:%s\n", temp, loc);
    }
    printf("line:%d\n", line);

return 0;
}
