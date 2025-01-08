#include<stdio.h>
#include<string.h>

int isPalindrome(char str[100]){
    int f=0;
    int l=strlen(str)-1;

    while(l>f){
        if(str[f++]!=str[l--]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[100];
    printf("Enter a string\n");
    scanf("%s",str);

    if(isPalindrome(str)){
        printf("%s is a palindrome\n",str);
    }else{
        printf("%s is not a palindrome\n",str);
    }
    return 0;
}