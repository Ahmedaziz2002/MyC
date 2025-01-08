#include<stdio.h>

int main(){
	FILE* fp;
	char s;
	fp=fopen("out1.bin","rb");
	while(fread(&s,sizeof(char),1,fp)>0){
		printf("%d\n",s);
	}
	fclose(fp);
}



