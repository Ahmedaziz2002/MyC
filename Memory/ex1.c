#include<stdio.h>

//WE now learn about scope we have block scope and file scope
//Block scope is one what we call function scope or local variable
//eg int i=0; 
//	{
//	int j=0;
//	printf("%d",j);ji slocal to this block
//	}
//	printf("%d",i);i is local to the outer block
//	printf("%d",j); error j is not known in this scope ie out of scope
//
//WE also have what we call File scope which is known as global scope
int shared=12;//Globallyb seen by all functions
void funct1(void){
	shared+=100;//Now shared holds 112
}

void funct2(void){
	printf("%d\n",shared);//Prints 112
}

int main(void){
	funct1();
	funct2();
	return 0;
}
