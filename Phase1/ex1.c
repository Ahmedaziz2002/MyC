#include<stdio.h>

int main(){
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);

	printf("The number %d is %s.\n",num,num%2==0?"even":"odd");
	return 0;
}
