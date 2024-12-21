#include<stdio.h>

struct Student{
    char name[30];
    int age;
};

void printStudent(struct Student* s){
    printf("Name %s\t",s->name);
    printf("Age %d\n",s->age);
}

int main(){
    struct Student student1={"Ahmed",22};
    struct Student student2={"Salma",45};

    printStudent(&student1);
    printStudent(&student2);

    return 0;
}