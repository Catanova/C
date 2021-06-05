#include <stdio.h>
#include <string.h>

int main () {
   char g[45], h[40];

   strcpy(g,  "It is summmer ");
   strcpy(h, "and it is time for vacation");

   strcat(h, g);

   printf(" adding both string: %s%s\n",g,  h);
   
   return(0);
}
