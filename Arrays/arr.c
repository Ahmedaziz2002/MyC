#include<stdio.h>

int main(void){
	int arr[10]={1,2,[5]=3,4};
	int x=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<x;i++){
		printf("Index [%d] is %d\n",i,arr[i]);
	}
	printf("%zu\n",sizeof arr);
	printf("%zu\n",sizeof(int));
	printf("%zu\n",sizeof arr/sizeof(int));
}
