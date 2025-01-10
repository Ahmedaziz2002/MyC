#include<stdio.h>

typedef struct{
	int x;
	int y;
}point;

int main(){
	point p={20,40};
	printf("%d %d\n",p.x,p.y);
	return 0;
}
