#include<stdio.h>

int increment(int a){
	a++;
	return a;
}

int main(void){
	int i=10;
	increment(i);
	printf("i==%d\n",i);
}
