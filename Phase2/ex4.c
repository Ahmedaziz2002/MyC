#include<stdio.h>

int foo(void);

int main(){
	int i;
	i=foo();
	printf("i==%d\n",i);
	return 0;
}

int foo(void){
	return 3490;
}

