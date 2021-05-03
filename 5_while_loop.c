#include <stdio.h>
#include <stdlib.h>


int main(){

    int day =1;
    float interest_rate  = .02;

    while(day<=31){
        printf("day:%d \t Amount:%.3f\n", day, interest_rate);
        interest_rate *=2;
        day++;
    }

    return 0;
}
