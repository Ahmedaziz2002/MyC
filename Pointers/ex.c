#include<stdio.h>

int main(void){
	int i; //A variable i declared
	int *p; //A pointer p declared
	p=&i; //Pointer p points to variable i
	i=10; //Initial value of i=10
	*p=20; //A pointer changes the value of i to be 20
	printf("i ==%d\n",i);
	printf("i ==%d\n",*p); //Derefencing the pointer
}
