#include<stdio.h>

int modify(int a){
	a=10;
	return a;
}

int main(){
	int num=20;
	modify(num);
	printf("New number is %d\n",num);
	return 0;
}

