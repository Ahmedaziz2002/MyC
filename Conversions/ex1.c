#include<stdio.h>

//WE want to convert a number to a string we use the sprintf function 
//Or the snprintf function
int main(){
	char s[10];
	float f=3.14159;
	//Convert float to string and store it in s 
	//Including the null terminator
	snprintf(s,10,"%f",f);
	printf("String value is %s\n",s);
	return 0;
}
