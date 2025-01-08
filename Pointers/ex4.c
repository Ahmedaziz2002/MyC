#include<stdio.h>

int main(){
	int *p;
	printf("%zu\n",sizeof(int));
	printf("%zu\n",sizeof p);
	printf("%zu\n",sizeof *p);
	return 0;
}

