#include<stdio.h>
//Here we explore arrays and pointers 
//an array acts asa pointer to its first element
int main(){
    int arr[]={1,2,3,4,5};
    int *p=arr;

    printf("%d\n",*p+1);
    return 0;
}