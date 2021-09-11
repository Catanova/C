

#include "stdio.h" // 
#include "stdlib.h" // malloc, calloc


typedef struct {

	int id; 
	char *cd;
}Element;

typedef struct Node{
	Element el;
	struct Node* next;

}Node;

typedef struct{

	Node *my_head;
}LinkImp;

typedef LinkImp* Linklist;



Node * memoryAllocation(Element el);
void insert_beg(Linklist link, Element el);
void insert_end(Linklist link, Element el);
void print_list(Linklist link);


int main (){

	Linklist my_list = (Linklist) malloc(sizeof(LinkImp));

	Element el1, el2, el3, el4, el5;


	el1.id = 10;
	el1.cd = "Mon";
	el2.id = 11;
	el2.cd = "Tue";
	el3.id = 12;
	el3.cd = "Wed";
	el4.id = 13;
	el4.cd = "Thu";
	el5.id = 14;
	el5.cd = "Fri";

	print_list(my_list);

	return 0;

}



Node * memoryAllocation(Element el){
	
	
	Node* pNew = (Node*) malloc(sizeof(Node));

	if (pNew == NULL){
		printf("error allocating memory.");
	}
	pNew->el = el;
	pNew->next = NULL;

	return pNew;
}

void insert_beg(Linklist link, Element el){

	// if the list is empty
	if(link->my_head == NULL){

		Node * pNew = memoryAllocation(el);
		link->my_head = pNew;
	}
	else{

		Node *pNew = memoryAllocation(el);
		pNew->next = link->my_head;
		link->my_head = pNew;
	}
}


void insert_end(Linklist link, Element el){
	
	// when list is empty
	if (link->my_head == NULL){
		
		Node* pNew = memoryAllocation(el);
		link->my_head = pNew;
	}
	else{
		// when list is not empty
		// find the tail and then add
		Node *temp = link->my_head; // start searching from the head
		while(temp->next != NULL){
			
			temp = temp->next;
		}

		Node* pNew = memoryAllocation(el);
		pNew->next = pNew;
	}
}


void print_list(Linklist link){

	Node * pNew = link->my_head;

	while( pNew != NULL)
	{
		printf("%d %s\n", pNew->el.id, pNew->el.cd);
		pNew = pNew->next;
	}

}