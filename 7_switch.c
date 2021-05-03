
#include <stdio.h>
#include <stdlib.h>

int main(){


char grade = 'c';

// automatic reading
switch (grade)
{
case 'a':
    printf("Excellent..\n");
    break;
case 'b':
   printf("good..\n");
    break;
case 'c':
   printf("ok..\n");
    break;
case 'd':
   printf("retake..\n");
    break;

default:
    printf("pending..\n");
    break;
}


char g;

// depend on the user input
printf("Enter letter grade:");
scanf(" %c", &g);
switch (g)
{
case 'a':
    printf("Excellent..\n");
    break;
case 'b':
   printf("good..\n");
    break;
case 'c':
   printf("ok..\n");
    break;
case 'd':
   printf("retake..\n");
    break;

default:
    printf("pending..\n");
    break;
}

return 0;
}