#include<stdio.h>
#include<string.h>

void printReverse(char *str){
    if(*str=='\0'){
        return;
    }
    printReverse(str+1);
    printf("%c",*str);
}

int main(){
    char str[1024];
    printf("Enter a string\n");
    scanf("%s",str);
    printf("Reverse string\n");
    printReverse(str);
    printf("\n");
    return 0;
}