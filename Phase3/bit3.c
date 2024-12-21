#include<stdio.h>

int count_ones(int n){
    int count=0;
    while(n){
        n&=(n-1);
        count++;
    }
    return count;
}
int count_zeros(int n){
    int count=0;
    int total_bits=sizeof(long long)*8;
    int ones=count_ones(n);
    count=total_bits-ones;
    return count;
}
int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);

    int result=count_ones(num);
    printf("Result is %d\n",result);
    int result2=count_zeros(num);
    printf("Result is %d\n",result2);

    return 0;
}