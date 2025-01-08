#include<stdio.h>
#include<string.h>

int my_strlen(char *s){
	int count=0;
	while(s[count]!='\0')
		count++;
	return count;
}

int main(){
	char name[]="Ahmed\n";
	printf("The length of the name is %zu\n",my_strlen(name));
	printf("The length of the name is %zu\n",strlen(name));
	return 0;
}

