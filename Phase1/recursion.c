#include<stdio.h>

int factorial(int fact){
    if(fact==0){
        return 1;
    }
    else{
        return fact * factorial(fact-1);
    }
}

int fibionacci(int fib){
    if(fib<0){
        return 0;
    }
    if(fib<1){
        return 1;
    }else{
        return fibionacci(fib-1)+ fibionacci(fib-2);
    }
}

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    int result=factorial(n);
    printf("Factorial of %d is %d\n",n,result);

    result=fibionacci(n);
    printf("Fibionacci of %d is %d\n",n,result);
    
    return 0;
}