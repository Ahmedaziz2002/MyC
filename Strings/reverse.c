#include<stdio.h>
#include<string.h>

void reverse(char str[],int index){
	if(str[index]=='\0'){
		return;
	}
	reverse(str,index+1);
	putchar(str[index]);
}
int main(void){
	char name[]="Ahmed\n";
	reverse(name,0);
	return 0;
}
	
