#include <stdio.h>
#include <string.h>
 
typedef struct student 
{
  int id;
  char name[20];
  float percentage;
} Element;
 
int main() 
{
  Element info;
  info.id= 4784;
  strcpy(info.name, "John");
  info.percentage = 86.53;
  printf(" Id is: %d \n", info.id);
  printf(" Name is: %s \n", info.name);
  printf(" Percentage is: %f \n", info.percentage);
  return 0;
}