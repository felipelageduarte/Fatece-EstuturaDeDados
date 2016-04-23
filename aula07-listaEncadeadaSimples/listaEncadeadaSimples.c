#include <stdio.h>
#include <stdlib.h>

#include "object.h" 


typedef struct NODE{
	//dados
	OBJECT *obj;
	//ponteiro pro prox. node
	struct NODE *next;
}NODE;


NODE *newNode(OBJECT *obj){
	//aloco memoria para o no
	NODE *n = (NODE *)malloc(sizeof(NODE));
	//inicializa o node com os valores
	n->obj = obj;
	n->next = NULL;
}

NODE *insertInTheEndNode(NODE *l, NODE *e){
	
	NODE *p;
	//caso a lista esteja vazia
	if(l == NULL){
		return e;
	} else {
		//anda por todos os elementos da lista ate o ultimo
		for(p = l; p->next != NULL ; p = p->next);
		//insere o elemento na ultima posicao
		p->next = e;
	}

	return l;
}

void freeList (NODE *l){
	NODE *p;
	NODE *aux;
	for (p=l;p!=NULL;p=p->next){
		freeObject(p->obj);
	}

	for (p=l; p!= NULL; p=p->next){		
    	aux = p->next;
		free(p);
		p = aux;
	}
}

void findAge(NODE *l, int age){
	NODE *p;
	for (p = l; p != NULL; p = p->next){
		if(p->obj->age == age){
			printf ("%s\n", toString(p->obj));
		}
	}
}

NODE *findAgeList(NODE *l, int age){
}

void printList(NODE *l){
	NODE *p;
	for(p = l; p != NULL ; p = p->next)
		printf("%s\n", toString(p->obj));
}

int main(int argc, char *argv[]){

	NODE *l = NULL;

	OBJECT *obj = newObject();
	sprintf(obj->name, "Gabriel Galam");
	obj->age = 21;

	NODE *e = newNode(obj);
	l = insertInTheEndNode(l, e);
	printList(l);
	printf("\n=======================================\n\n");
	

	obj = newObject();
	sprintf(obj->name, "Paulo Ricardo");
	obj->age = 24;

	e = newNode(obj);
	l = insertInTheEndNode(l, e);
	printList(l);

	
	printf("\n=======================================\n\n");
	findAge(l, 21);
	printf("\n=======================================\n\n");
	findAge(l, 19);
	printf("\n=======================================\n\n");

	freeList(l);
	l = NULL;

	return 0;
}












