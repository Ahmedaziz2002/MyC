#include<stdio.h>
#include<string.h>

int main(){
    char source[30]="Hello";
    char target[30];

    strcpy(target,source);
    printf("Source :%s\t target :%s\n",source,target);

    strcat(target," World");
    printf("After concatenation :%s\n",target);

    int result=strcmp(source,target);
    printf("%d",result);

    return 0;
}