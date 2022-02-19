#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct node{

	char name[10];
	struct node* next;

}NODE;


NODE* new_node(char name[]){

	NODE* n = (NODE*) malloc(sizeof(NODE));
	strcpy(n->name,name);
	n->next = 0;
	return n;

}


NODE* insert(NODE* list_start, char name[]){

	if (list_start == 0){
	NODE* n = new_node(name);
	return n;
	}


	else if (strcmp(name, list_start->name) < 0){
	NODE* n = new_node(name);
	n->next = list_start;
	list_start = n;
	return n;
	}

	else if(strcmp(name, list_start->name) == 0){
	return list_start;
	}

	NODE* p;
	
	for (p = list_start; p!= 0; p = p->next){
		

		if (p->next == 0){
			

	NODE* n = new_node(name);
	n->next = 0;
	p->next = n;
	return list_start;

		}
	

		else if ( strcmp(name,p->name) == 0 || strcmp(name,p->next->name) == 0){
		return list_start;
		}
	else if(strcmp(name,p->next->name) < 1 && strcmp( name,p->name) > 1) {
		NODE* n = new_node(name);
		n->next = p->next;
		p->next = n;
		return list_start;
                }


	}

		
}


void show_list(NODE* list_start){
	if (list_start == NULL){
	printf("empty list D:\n");
	return;
	}
	
	NODE* p = list_start;
	while(p != NULL){
	printf("%s\n", p->name);
	p = p->next;
	}

}

int main(){


	NODE* list_start = NULL;

	while(1){

	printf("enter name (less than 9 chars, quit to quit): ");
	char name[10];	
	scanf("%s", name);

	if( strcmp(name, "quit") == 0){
	show_list(list_start);
	return;
	}

	list_start=insert(list_start,name);

	}

		return 0;
}

