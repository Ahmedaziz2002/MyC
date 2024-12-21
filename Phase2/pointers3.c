#include<stdio.h>
//Pointer to a pointer
int main(){
    int x=10;
    int *p=&x;
    int **pp=&p;

    printf("Value of **pp is %d\n",*(*pp));
    return 0;
}