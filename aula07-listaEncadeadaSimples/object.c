
#include "object.h"

OBJECT *newObject(){
	OBJECT *obj;
	obj = (OBJECT *)malloc(sizeof(OBJECT));
	obj->name = (char *)malloc(100 * sizeof(char));
	obj->age = -1;
	return obj;
}
	
void freeObject(OBJECT *obj){
	free(obj->name);
	free(obj);
}

char *toString(OBJECT *obj){
	char *str = (char *)malloc(200 * sizeof(char));
	sprintf(str, "Idade: %3d - Name: %s", obj->age, obj->name);
	return str;
}
