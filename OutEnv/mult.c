#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
	int total=1;//Initialize total to 1
	for(int i=1;i<argc;i++){
		int value=atoi(argv[i]);//Convert the argv to int
					//store it in value
		total*=value;//multiply total with value
		}
	printf("%d\n",total);
}
