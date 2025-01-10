#include<stdio.h>
#include<stdlib.h>

int main(){
	//Here we show dynamic memory allocation
	int array_size;

	printf("Enter the size of the array\n");
	scanf("%d",&array_size);

	if(array_size<=0){
		printf("Invalid input.Enter a positive integer\n");
		return 1;
	}
	int *arr=(int*)malloc(sizeof(int)*array_size);
	if(arr==NULL){
		printf("Memory allocation failed\n");
		return 1;
	}
	for(int i=0;i<array_size;i++){
		printf("Enter the data of the array\n",i+1);
		scanf("%d",&arr[i]);
		arr[i]=arr[i]*2;
	}
	int sum=0;
	for(int i=0;i<array_size;i++){
		sum+=arr[i];
	}
	printf("Sum of the element is %d\n",sum);

	printf("Address of the array is %p\n",*arr);
	printf("Address of the first element is %p\n",*(arr));
	printf("Address of the second element is %p\n",*(arr+1));


	free(arr);//Freeing memory after use
	arr=NULL;
	return 0;
}

