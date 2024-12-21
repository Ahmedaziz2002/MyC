#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        printf("Index [%d] is %d\n",i,arr[i]);
    }
    return 0;
}