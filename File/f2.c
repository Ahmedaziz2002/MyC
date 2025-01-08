#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE* fp;
	fp=fopen("helo.txt","r");
	if(fp==NULL){
		fprintf(stderr,"Error could not open a file\n");
		exit(1);
	}
	int c=fgetc(fp);
	printf("%c\n",c);
	fclose(fp);
}

