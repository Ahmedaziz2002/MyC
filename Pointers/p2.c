#include<stdio.h>

int main(){
	int a[]={1,2,3,4,10};

	int *p=&a[0];
	while(*p!=10){
		printf("%d\n",*p);
		p++;
	}
}
