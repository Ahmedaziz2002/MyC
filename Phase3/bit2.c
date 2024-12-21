#include<stdio.h>

int setBit(int num,int n){
    return num | (1<<n);
}

int clearBit(int num,int n){
    int mask =~(1<<n);
    return num & mask;
}

int checkBit(int num,int n){
    return num & (1<<n);
}

int toggleBit(int num,int n){
    return num ^ (1<<n);
}

int main(){
    int num=4;//Binary 0100
    num=setBit(num,1);//set the first bit 0110
    num=clearBit(num,2);//clear the 2nd bit 0010
    int bit=checkBit(num,1);//check the first bit 1

    printf("Resulting number:%d\n",num);
    printf("Checked bit:%d\n",bit);

    num=toggleBit(num,3);
    printf("Toggled number is :%d\n",num);

    return 0;

}