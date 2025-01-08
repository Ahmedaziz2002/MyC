#include<stdio.h>

void increment(int *p){
	*p=*p+1;
}
int main(void){
	int i=10;
	int *j=&i;
	printf("i ==%d\n",i);
	printf("i ==%d\n",*j);
	increment(j);
	printf("i ==%d\n",i);
	increment(&i);
	printf("i ==%d\n",*j);
}
