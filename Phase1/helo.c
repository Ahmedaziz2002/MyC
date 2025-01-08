#include<stdio.h>

int main(){
	int marks;
	printf("Enter your marks\n");
	scanf("%d",&marks);
	printf("Your %d marks is a %s\n",marks, marks>50? "Pass":"fail");
	return 0;
}
