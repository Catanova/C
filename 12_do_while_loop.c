#include <stdlib.h>
#include <stdio.h>


int main(){

    int score=0;
    int numberTest =0;
    float testscore =0;
    float avg =0.00;



    do{
        printf("Test:%d \tAverage: %.2f\n", numberTest, avg);

        printf("Enter score:");
        scanf(" %d",& score );
        testscore +=score ;
        numberTest++; // incremeting by one number of test
        avg = testscore/numberTest;

    }while (score != -1);

return 0;
    
}