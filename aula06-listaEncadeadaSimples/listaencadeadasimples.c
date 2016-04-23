#include "listaencadeadasimples.h"

NODE *newNode(OBJECT *obj){
	NODE *node = (NODE *)malloc(sizeof(NODE));
	node->obj = obj;
	node->prox = NULL;
	return node;
}

void printList(NODE *list){
	NODE *p;
	int i;

	//se a lista estiver vazia retorne
	if(list == NULL) return;
	//do primeiro elemento da lista, ate o ultimo
	for(p = list, i=0; p != NULL; p = p->prox, i++){
		char *str = toString(p->obj);
		printf("%d) %s\n", i, str);
		free(str);
	}
}

void insertNode(NODE **list, NODE *node){
	NODE *p;
	//caso a lista esteja vazia deve-se alterar a cabeca
	//da lista
	if((*list) == NULL){
		(*list) = node;
	} else {
		//caso contrario, deve-se inserir no fim da lista
		//para isso percorre-se todos os elementos da lista
		//ate o ultimo e insere
		for(p = (*list); p->prox != NULL; p = p->prox);

		//faz o ponteiro do ultimo elemento da lista
		//apontar para o novo elento
		p->prox = node;
	}
}

void freeList(NODE **list){
	NODE *pa, //ponteiro atrasado 
		 *p = (*list);//ponteiro de navegacao
	
	//percorre a lista enquanto existir elementos
	while(p	!= NULL){
		pa = p;
		p = p->prox;
		//libera o objeto que o NODE aponta
		freeObject(pa->obj);
		//libera a memoria do proprio NODE
		free(pa);
	}
	
	//altera o ponteiro da lista para receber NULL
	//indicativo de lista vazia
	(*list) = NULL;
}

int isListEmpty(NODE *list){
	return (list == NULL);
}



