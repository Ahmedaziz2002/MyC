#include<stdio.h>

int if_case(){
    printf("Here we show the use of if statements\n");
    int n=10;
    if(n>10){
        printf("The number is big bro!\n");
    }
    if(n<10){
        printf("The number is small bro!\n");
    }
    if(n=10){
        printf("The number is 10\n");
    }
    return n;
}

int if_else(){
    printf("Now we try to see if else\n");
    int n=5;
    if(n>5){
        printf("The number is big damn\n");
    }
    else{
        printf("In very good range now\n");
    }
    return n;
}

int case_switch(){
    printf("Now we explore the switch statement\n");
    int n=10;
    switch(n){
        case 1 ... 9:
        printf("The number is less than 9\n");
        break;
        case 10: 
        printf("Good number huh!\n");
        break;
        default:
        printf("NO go away\n");
        break;
    }
    return n;
}

int main(){
    if_case();
    if_else();
    case_switch();

    return 0;
}