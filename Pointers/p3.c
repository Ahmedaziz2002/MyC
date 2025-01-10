#include<stdio.h>
#include<string.h>

int main(){
	char s[]="Goats!";
	char *t;

	memcpy(t,s,7);

	printf("%s\n",t);
	return 0;
}
