#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
#include<string.h>

void list_files(const char* dirname){
    DIR *dir;
    struct dirent *entry;

    if((dir=opendir(dirname))==NULL){
        perror("opendir");
        return;
    }
    printf("Files and directories in %s:\n",dirname);
    while((entry=readdir(dir))!=NULL){
        if(strcmp(entry->d_name,"..")==0 || strcmp(entry->d_name,"..")==0){
            continue;
        }
        printf("%s\n",entry->d_name);
    }
    closedir(dir);
}

int main(){
    char dirname[1024];

    printf("Enter directory path:\n");
    scanf("%d",dirname);

    list_files(dirname);

    return 0;
}