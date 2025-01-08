#include<stdio.h>

union Data{
    int age;
    int roll;
};

int main(){
    union Data data;
    data.age=22;

    printf("Age %d",data.age);

    return 0;
}