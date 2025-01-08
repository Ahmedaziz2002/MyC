#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE *fp;
	char s[1024];

	int linecount=0;

	fp=fopen("helo.txt","r");
	if(fp==NULL){
		fprintf(stderr,"NO such file bro\n");
		exit(1);
	}
	while(fgets(s,sizeof s,fp)!=NULL){
		printf("%d.%s",++linecount,s);
	}
	fclose(fp);
}
