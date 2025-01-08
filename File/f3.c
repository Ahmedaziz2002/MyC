#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE* fp;
	int c;

	fp=fopen("helo.txt","r");
	if(fp==NULL){
		fprintf(stderr,"Cannot open file\n");
		exit(1);
	}
	while((c=fgetc(fp))!=EOF){
		printf("%c",c);
	}
	fclose(fp);
}
