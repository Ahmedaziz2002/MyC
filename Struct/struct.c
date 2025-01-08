#include<stdio.h>

struct Car{
	char *name;
	float price;
	int speed;
};

void print_car(struct Car *c){
	printf("Name: %s\n",c->name);
	printf("Price(USD): %f\n",c->price);
	printf("Speed(KM): %d\n",c->speed);
}

int main(void){
	struct Car saturn={"Saturn SL\2",167834.123,190};
	print_car(&saturn);
	//Copy struct data to another struct
	struct Car mercury=saturn;
	print_car(&mercury);

	return 0;
}

