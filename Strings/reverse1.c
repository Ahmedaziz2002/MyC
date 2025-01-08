#include<stdio.h>

void reverse(char *s){
	if(*s=='\0'){
		return;
	}
	reverse(s+1);
	putchar(*s);
}

void main(void){
	char name[]="Ahmed\n";
	reverse(name);
}

