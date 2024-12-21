#include<stdio.h>
#include<stdlib.h>
//Dynamic memory allocation of arrays
int main(){
    int n;//Takes the size of the array
    int *arr=(int *)malloc(n*sizeof(int));

    if(arr==NULL){
        printf("Memory allocation failed!\n");
        return 0;
    }
    printf("Enter the size of the array\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter data for the array\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("Array at index [%d] is %d\n",i,arr[i]);
    }
    free(arr);
    arr=NULL;//To avoid dangling pointers
    return 0;
}