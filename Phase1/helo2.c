#include<stdio.h>

int main(){
	//WE TEST BOOLEAN OPERATORS HERE
	int x=20;
	if(x>10 && x<20){
		printf("X is good number!\n");
	}
	if(x>10 || x<20){
		printf("X is a fair number!\n");
	}
	if(!(x<10)){
		printf("X is a great number!\n");
	}
	printf("%zu",sizeof x);
	return 0;
}

