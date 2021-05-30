#include "jump3.h"

#define MAX 8
void change1(int  t){
     printf ("before change1 of t: %d address of t %p\n", t, &t);
  
    t =89; 
    // local exist only inside the function 
   printf ("After change1 of t: %d address of t %p\n", t, &t);
  
    //printf ("value of t: %d address of t %p\n", t, &t);
}
void change2(int * fr){
    printf(" before change2 fr: %d address of fr %p\n", *fr, &fr);
    *fr =77;
    printf("after change2 fr: %d address of fr %p\n", *fr, &fr);
}
void change3(int ** score){
    printf("BEFORE change3 score: %d address socre: %p\n", **score, &score);
    **score= 4;
    printf("AFTER change3 score: %d address socre: %p\n", **score, &score);
}
void change4(int ** fun){
    printf("BEFORE change3 fun: %d address fun: %p\n", **fun, &fun);
    **fun= 100;
    printf("AFTER change3 fun: %d address fun: %p\n", **fun, &fun);
}

int main(){
int val = 10;
printf ("value of val: %d address of val %p\n", val, &val);

// change1 function can only change val inside change1 function  
change1(val);
printf ("value of val: %d address of val %p\n", val, &val);


/*NOTE: passing the address of val to ptr change val
 inside change2 function and change val also in main function
 */
int * ptr = &val;
change2(ptr);
printf ("value of val: %d address of val %p\n", val, &val);

int val1 = 3;
int *ptrScore = &val1;

// address of an address
change3(&ptrScore);
printf(" value val1: %d adress val1 %p\n", val1,&val1);


int * ptrFun = ptrScore;
change4(&ptrFun);
printf(" value ptrFun: %d adress ptrf %p\n", *ptrFun,&ptrFun);

}