#include<stdio.h>

int add(int a,int b);//declaration

int main(){
    int a=10; int b=20;
    int sum=add(a,b);
    printf("Sum is %d\n",sum);
    return 0;
}

int add(int a,int b){
    return a + b;
}