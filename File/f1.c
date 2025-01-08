#include<stdio.h>
int main(){
	char message[]="Ahmed is here\n";
	printf("Ahmed is here\n");
	fprintf(stdout,"Ahmed is here\n");
	printf("%s\n",message);
	for(int i=0;i<message[i]!='\0';i++){
		putchar(message[i]);
	}
	return 0;
}
