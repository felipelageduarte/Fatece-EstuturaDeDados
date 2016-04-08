#include<stdio.h>

int validarTriangulo(int a, int b, int c, int e){
	
    if(a + b > c || a + b > e || 
       a + c > b || a + c > e || 
       a + e > b || a + e > c){
    	return 1;
	} else if(b + a > c || b + a > e || 
	   b + c > a || b + c > e || 
	   b + e > a || b + e > c){
    	return 1;
	}else if(c + a > b || c + a > e || 
	   c + b > a || c + b > e || 
	   c + e > a || c + e > b){
    	return 1;
	} else if(e + a > b || e + a > c || 
	   e + b > a || e + b > c || 
	   e + c > a || e + c > b){
    	return 1;
	}

	return 0;
}

int main(int argc, char *argv[]){

	

	return 0;
}
