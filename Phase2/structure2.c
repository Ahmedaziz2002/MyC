#include<stdio.h>

#define MAX 2
//An array of structures
struct Student{
    char name[30];
    int age;
};

int main(){
    struct Student student[MAX];

    for(int i=0;i<MAX;i++){
        printf("Enter student details %d\n",i+1);
        printf("Enter NAME:\n");
        scanf("%s",student[i].name);
        printf("Enter AGE:\n");
        scanf("%d",&student[i].age);
    }
    printf("\nName\tAge\t\n");
    for(int i=0;i<MAX;i++){
        printf("%s\t%d\t\n",student[i].name,student[i].age);
    }
    return 0;
}