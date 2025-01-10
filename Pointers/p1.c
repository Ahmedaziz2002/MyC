#include<stdio.h>

int main(){
	//Pointer arithmetic
	int num[]={1,4,6,8,9};

	int *p=&num[0];
	for(int i=0;i<5;i++){
		printf("%d\n",*(p+1));
	}
}
