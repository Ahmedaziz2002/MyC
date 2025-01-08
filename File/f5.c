#include<stdio.h>

//Now we demonstrate how to write a file
//We use functions like fputc,fputs,fprintf
int main(){
	FILE *fp;
	int x=32;

	fp=stdout;

	fputc('B',fp);
	fputc('\n',fp);
	fputs("Ahmed is fantastic\n",fp);
	fprintf(fp,"x=%d\n",x);

	fclose(fp);
}
