#include<stdio.h>
#include<string.h>

int is_palindrome(char str[]){
	int f=0;
	int l=strlen(str)-1;

	while(f<l){
		if(str[f++]!=str[l--]){
			return 0;
		}
	}
	return 1;
}
void main(void){
	char test[240];
	printf("Enter a test string:\n");
	scanf("%s",test);

	if(is_palindrome(test)){
		printf("%s is a palindrome\n",test);
	}
	else{
		printf("%s is not a palindrome\n",test);
	}
}
