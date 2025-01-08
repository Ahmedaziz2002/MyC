#include<stdio.h>

int main(){
	int i=10;
	int j=5+i++;
	printf("I=%d and j=%d\n",i,j);

	int m=4;
	int n=2+ ++m;
	printf("m=%d and n=%d\n",m,n);
	return 0;
}
