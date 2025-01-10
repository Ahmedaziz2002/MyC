#include<stdio.h>
#include<string.h>

int main(){
	int a[]={11,22,33};
	int b[3];

	memcpy(b,a,3*sizeof(int));
	printf("%d\n",b[1]);
	return 0;
}
