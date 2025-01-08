#include<stdio.h>
#include<string.h>

int main(void){
	char name[]="Ahmed\n";
	char *name1;

	strcpy(name1,name);
	printf("%s\n",name1);
	char peter[]="Peter is good\n";
	char *p;

	strncpy(p,peter,4);
	printf("%s\n",p);
}
