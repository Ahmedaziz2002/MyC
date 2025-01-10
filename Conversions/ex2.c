#include<stdio.h>
#include<stdlib.h>


int main(){
	//Converting string to numeric we use the atoi functions
	char *pi="3.14158";
	float f;

	f=atof(pi);

	printf("%f\n",f);
	return 0;
}
