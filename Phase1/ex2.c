#include<stdio.h>

int main(){
	int x;
	printf("Enter a number:\n");
	scanf("%d",&x);
	printf("The entered number %d is %s\n",x,x%2==0?"even":"odd");
	return 0;
}
