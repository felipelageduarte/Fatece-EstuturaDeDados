#include <stdio.h>

#include "object.h"
#include "listaencadeadasimples.h"

int main(int argc, char *argv[]){
	NODE *list = NULL, 
	     *p = NULL;
	
	OBJECT *obj = newObject();
	sprintf(obj->name, "Felipe Simoes Lage Gomes Duarte");
	obj->age = 28;
	p = newNode(obj);	
	insertNode(&list, p);
	
	obj = newObject();
	sprintf(obj->name, "Karina Bindandi Emboaba de Oliveira");
	obj->age = 26;
	p = newNode(obj);	
	insertNode(&list, p);
	
	printList(list);
	
	freeList(&list);
	
	return 0;
}
