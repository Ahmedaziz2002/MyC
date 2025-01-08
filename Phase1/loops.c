#include<stdio.h>

void for_loop(){
    for(int i=0;i<10;i++){
        printf("Hello again\n");
    }
}

void while_loop(){
    int i=10;
    while(i<10){
        printf("Ahmed is here\n");
        i++;
    }
}

void do_while(){
    int i=10;
    do{
        printf("Ahmed is here\n");
        i++;
    }
    while(i<10);
}

int main(){
    for_loop();
    while_loop();
    do_while();

    return 0;
}