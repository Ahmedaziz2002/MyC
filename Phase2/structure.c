#include<stdio.h>

//A structure is a user defined data type that allows combination of different data types into a single unit
struct Student{
    char name[30];
    int rollno;
    float marks;
};

int main(){
    struct Student student1={"Ahmed",7815,96.5};
    printf("The details are %s\n%d\n%.2f\n",student1.name,student1.rollno,student1.marks);
    return 0;
}