#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,attempts=0;

    srand(time(0));
    number=rand()%100+1;
    printf("\tWELCOME TO THE NUMBER GUESSING GAME\n");
    printf("I am thinking of a number between 1 to 100\n");
    do{
        printf("Enter your guess:\n");
        scanf("%d",&guess);
        attempts++;

        if(guess>number){
            printf("THe guess is too high\n");
        }
        else if(guess<number){
            printf("The guess is too low\n");
        }
        else{
            printf("You got it right after %d attemps.The number is %d\n");
        }
    }while(guess!=number);
    return 0;
}