#include<stdio.h>

void increment(int *p){//pointer declaration
    (*p)++;//pointer arithmetic where we incremented it
}//passing pointers to functions pass by reference

void decrement(int *p){
    (*p)--;//pointer arithmetic we decrement it
}
int main(){
    int x=42;
    increment(&x);//initializing a pointer
    printf("Value of x is %d\n",x);
    decrement(&x);
    printf("value of x is %d\n",x);
    return 0;

    //Here we explored pointers
}