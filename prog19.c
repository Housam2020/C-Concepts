#include<stdio.h>
#include<string.h>

#define true 1
#define false 0
#define f(x) (x+6)	//textual substitution example




// Linked list: 1 -> 2 -> 3 -> null
typedef struct node{

	int value;
	struct node* next = NULL;
	

}	NODE;	// Typedef now points to this block whenever NODE is called


Node* new_node(int value){

	Node* fresh_pointer = malloc(sizeof(NODE));
	fresh_pointer->value = fresh_value;	// Access value through fresh_pointer 
	return fresh_pointer;
}

void insert(NODE* list_start, int value){

	Node* fresh_node = new_node(int value);
	while(list_start->next != NULL){

	list_start = list_start ->next

	}

	

}


int main(){


	NODE* list_start = NULL;

	char buf[500];

	while(1){
	printf("Enter positive integer or quit: ");
	scanf("%s", buf);
	// No input checking
	

	//strcmp return 0 if the string are the same
	if (strcmp(buf, "quit") == 0)
	{
		return 0;

	}	

	int value = atoi(buf);
	printf("%d\n" ,value);

	}



	return 0;
}

