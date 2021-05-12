#include <stdio.h>

int main () {
   FILE *fp;
   char str[60];
   char create[10];
   int account;
   char sales[10];
   double accountBal =0.00;


   /* opening file for reading */
   fp = fopen("10_fgets.txt" , "r");
   if(fp == NULL) {
      printf("Error opening file\n");
      return(-1);
   }
   while( fgets (str, 60, fp)!=NULL ) {
      /* writing content to stdout */
        puts(str);
        
      printf(str);
   }
   fclose(fp);
   
   return(0);
}
