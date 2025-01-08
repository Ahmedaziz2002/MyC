#include<stdio.h>

int main(){
	char input[256],name[256];
	int age;

	printf("What is your name?\n");
	fgets(input,256,stdin);
	sscanf(input,"%s",name);

	printf("Hello %s. How old are you?\n",name);
	while(1){
		fgets(input,256,stdin);
		if(sscanf(input,"%d",&age)==1)break;
		printf("This wasn't anything I expected\n");
	}
	printf("Well %s you look %d so young than I expected\n",name,age);
}
