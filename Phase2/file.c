#include<stdio.h>

int main(){
    FILE *fp;
    char c;
    //create a new file
    char file[30];
    printf("Enter a file name to create\n");
    scanf("%s",file);

    fp=fopen(file,"w");
    if(fp==NULL){
        printf("Error opening the file\n");
        return 1;
    }
    char details[200];
    printf("Enter the content for your file\n");
    scanf("%s",details);
    fprintf(fp,details);
    fclose(fp);

    fp=fopen(file,"r");
    if(fp==NULL){
        printf("Error opening the file\n");
        return 1;
    }
    while((c=fgetc(fp))!=EOF){
        putchar(c);
    }
    fclose(fp);

    return 0;
}