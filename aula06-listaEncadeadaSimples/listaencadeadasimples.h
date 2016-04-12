#ifndef LISTAENCADEADASIMPLES_H
#define LISTAENCADEADASIMPLES_H
	
	#include <stdio.h>
	#include <stdlib.h>
	#include "object.h"
	
	typedef struct NODE{
		OBJECT *obj;
		struct NODE *prox;
	}NODE;	
	
	NODE *newNode(OBJECT *obj);
	void printList(NODE *list);
	void insertNode(NODE **list, NODE *node);
	void freeList(NODE **list);
	int isListEmpty(NODE *list);

#endif
