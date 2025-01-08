#include<stdio.h>

int main(){
	FILE* fp;
	char bytes[6]={4,56,7,8,9,12};

	fp=fopen("out1.bin","wb");
	//In the call to fwrite the arguments are
	//1.Pointer to data
	//2.Sizeof each piece of dat
	//3.Count of each piece of data
	//4.File
	fwrite(bytes,sizeof(char),6,fp);
	fclose(fp);
}
