#include<stdio.h>
#include<stdlib.h>
#define MAX 4

struct Student{
    char name[30];
    int roll_no;
    float marks;
};

int searchStudent(struct Student s[MAX],int roll_no){
    for(int i=0;i<MAX;i++){
        if(s[i].roll_no==roll_no){
            return i;
        }
    }
    return -1;
}

void printStudent(struct Student s[MAX]){
    for(int i=0;i<MAX;i++){
        printf("\tName: %s\tRoll_no: %d\tMarks: %.2f\n",s[i].name,s[i].roll_no,s[i].marks);
    }
    printf("\n");
}

void inputDetails(struct Student s[MAX]){
    for(int i=0;i<MAX;i++){
        printf("\tInput student %d details\n",i + 1);
        printf("Enter Name:\n");
        scanf("%s",s[i].name);
        printf("Enter Roll_no:\n");
        scanf("%d",&s[i].roll_no);
        printf("Enter the Marks:\n");
        scanf("%f",&s[i].marks);
    }
}

int main(){
    struct Student students[MAX];
    
    while(1){
        int choice;
        printf("What do you want to do\n1.Update students record\n2.Search student\n3.Exit\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            inputDetails(students);
            printStudent(students);
            break;
            case 2:
            int target;
            printf("What roll no do you want to search:\n");
            scanf("%d",&target);
            int search=searchStudent(students,search);
            if(search!=-1){
                printf("Student found Name %s Roll no %d Marks %.2f",students[search].name,students[search].roll_no,students[search].marks);
            }else{
                printf("Student not found!\n");
            }
            break;
            case 3:
            exit(0);
            default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}
