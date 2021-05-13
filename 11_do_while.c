#include <stdlib.h>
#include <stdio.h>

int main(){

  int num =0;
   do{
       printf("num:  %d\n ", num);
       num++;

   }while(num<=10);

  int Xnum =0;
   do{
       // if Xnum = 3 or 4 skip. printf skip Xnum= 3 and Xnum =7
       if(Xnum ==3 || Xnum == 7){
           Xnum++;
           continue;
       }

       printf("Xnum:  %d\n ", Xnum);
       Xnum++;

   }while(Xnum<=10);


   return 0;

}