#include<stdio.h>

int global=20;

int main(){
    int local=10;
    printf("Global %d local %d\n",global,local);
    return 0;
}