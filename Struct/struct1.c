#include<stdio.h>

//A struct is a user defined data type that holds multiple pieces of data of different types
struct Car{
	char *name;
	float price;
	int speed;
};

int main(){
	struct Car saturn={"Saturn SL/2",15999.99,175};
	printf("Name: %s\n",saturn.name);
	printf("Price(USD): %f\n",saturn.price);
	printf("Speed(KM): %d\n",saturn.speed);
	return 0;
}
