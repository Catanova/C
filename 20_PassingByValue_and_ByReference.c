#include <stdio.h>
#include <stdlib.h>

void funt_1(int a){
    a =4;
    printf("\tfunct_1 a store at: %p \tvalue a:%d\n", &a, a);
}
/*ALL FUNCTION BELOW ARE PASSED BY REFERENCE */
/*LOOK VERY CAREFULL TO THE PATERN*/
void funct_2(int *p){
    *p=0;

    printf(" \t Funt_2: p store at:%p \taddress of p:%p \tvalue of p:%d\n ", p, &p, *p);
}
void funct_3(int **p){
    // d reference twice in order to change value 
    **p= 3;
    printf(" \t Funt_3: p store at:%p \taddress of p:%p \tvalue of p:%d\n ", p, &p, *p);
}

void funt_4(int ***v){
    // d reference three in order to change value 
    ***v= 55;
    printf("\t Funct_4:  v store at:%p \taddress of v:%p \tvalue of v:%d\n ", v, &v, **v);
}

int main(){

    int a = 11;
    int *p = &a;
    printf("\t a store at:%p \tvalue a:%d\n", &a, a);
    printf("\t p store at:%p \taddress of p:%p \tvalue of p:%d\n ", p, &p, *p);
	
	printf("\tValue of a remain same inside main and change inside funct_1 because it is passed by value \n.");
    funt_1(a);
    printf("\t 1: a store at:%p \tvalue a:%d\n", &a, a);
    printf("-----------------------------------------------------------------------\n");
    printf("\tValue of p change definitively inside main and funct_2 because it is pass by reference.\n");
    printf(" \t  p store at:%p \taddress of p:%p \tvalue of p:%d\n ", p, &p, *p);
    funct_2(p);
    printf(" \t p store at:%p \taddress of p:%p \tvalue of p:%d\n ", p, &p, *p);
    /*Address of an address */
    
	printf("-----------------------------------------------------------------------\n");
    printf("\tWhen passing pointer by reference( &p )into to function it passes with  double start outside main funt_3(**p)\n.");
    funct_3(&p);
    printf(" \tp store at:%p \taddress of p:%p \tvalue of p:%d\n ", p, &p, *p);
    int wx=8;
    // int **v= &wx; // wrong
    // int **v= wx; // wrong
    
    /* Double pointer can be only assign to another pointer 
    printf(" \t  v store at:%p \taddress of v:%p \tvalue of v:%d\n ", v, &v, **v);
    ch_3(v);
    */

    printf("-----------------------------------------------------------------------\n");
    printf("\tWhen passing double pointer by reference( &v )into to function it passes with  triple start outside main funt_4(***v)\n.");
    int **v= &p;      
    printf(" \t v store at:%p \taddress of v:%p \tvalue of v:%d\n ", v, &v, **v);
    
    funt_4(&v); 
    printf(" \t v store at:%p \taddress of v:%p \tvalue of v:%d\n ", v, &v, **v);

    
}
