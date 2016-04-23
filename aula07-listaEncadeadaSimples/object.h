#ifndef OBJECT_H
#define OBJECT_H
	
	#include <stdlib.h>
	#include <stdio.h>

	typedef struct OBJECT{
		char *name;
		int	age;
	}OBJECT;

	OBJECT *newObject();	
	void freeObject(OBJECT *obj);
	char *toString(OBJECT *obj);
	
#endif
