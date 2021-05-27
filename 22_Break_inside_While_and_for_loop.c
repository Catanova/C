

#include <stdio.h>
typedef struct
{
    int patientID;
	int arrivalTime;
	int eCheckIn;
} Patient;


//Typedef so that the Element that we will use in the Queue is the Patient struct.
typedef Patient Element;


int main(){

    int vaccineTableTime[10] = {0};
    Patient* vaccineTable[10] = {NULL};
    int observationTime[60] = {0};
    Patient* observationTable[60] = {NULL};
    int currentime =0;
   
   printf("///////////////LOOK CAREFULLY AT INDEX j.///////////\n.");
   printf("observation print 10 time: 2*5 =10\n");
    while(currentime<2){
        int j;
            for(j=0; j<5; j++){
                observationTime[j] = 30;
                printf("j:%d observation[%d]:%d \n",j, j,observationTime[j]); 
            }
        
        currentime++;
    }
    
    printf(" increment j outside for loop: for(; j<10; j++).\n");
     // 
    int time =0;
    while(time<2){
        int j =0;
            for(; j<5; j++){
                observationTime[j] = 30;
                printf("j:%d observation[%d]:%d \n",j,j, observationTime[j]); 
            }
        
        time++;
    }

     printf("j increment by itself : for(; j<10; j++).\n");
    int time2 =0;
    while(time2<2){
        int j =0;
            for(; j<5; j++){
                observationTime[j] = 30;
                printf("j:%d observation[%d]:%d \n",j,j, observationTime[j]); 
            }
      
        time2++;
    }

    int time3 =0;
	
	
	printf("///////////////BREAK INSIDE FOR LOOP.///////////\n.");
	printf(" while loop print 2 time and for loop do not print 5 time.\n");
    printf(" while loop print 2 time and for loop break after.\n");
    printf("usefull to work with file such as line, increment or decrement index.\n");

    while(time3<2){
        int j =0;
        
            for(;j<5; j++){
                observationTime[j] = 30;
                printf("j:%d observation[j]:%d \n",j, observationTime[j]); 
                break;
            }
       
        time3++;
    }
     int time4 =0;

	printf("///////////////BREAK INSIDE WHILE LOOP///////////\n.");
	printf("while loop suppose to print twice from 0-5 but break end while loop sooner\n");
    printf("for loop print 5 time and while print 1 time break early.\n");
    while(time4<2){
        int j =0;
        
            for(; j<5; j++){
                observationTime[j] = 30;
                printf("j:%d observation[%d]:%d \n",j,j, observationTime[j]); 
               
            }
            break;

        time4++;
    }


   return 0;
}
