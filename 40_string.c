

#include<string.h>
#include<stdio.h>
#define MAX 25
void func(char *a, char *post);

int main()
{
	int i;
    char my_arr[] = {'1','4','9','16','12'};
    char post[MAX];
    printf("Original array: \n\n");

    for(i = 0; i < 5; i++)
    {
        printf("%c ", my_arr[i]);
    }

    func(my_arr, post);

    // signal to operating system program ran fine
    return 0;
}

void func(char *a, char *post)
{
    int i;

    // increment original elements by 5

    for(i = 0; i < strlen(a); i++)
    {
        //post[i] = a[i] ;
        char *p = (char) malloc(sizeof(char)*20);

        strcpy(post[i],a[i]);
        //strcpy(p[i],a[i]);
        printf("%s ", post[i]);
        //printf("%c ", p[i]);

    }
}

