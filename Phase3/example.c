#include<stdio.h>


int add(int a,int b){
    return a+b;
}

int (*sum)(int,int)=add;

int main(){
    int result=sum(5,4);
    printf("%d",result);
    return 0;
}