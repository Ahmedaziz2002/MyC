#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE* fp;
    printf("\t\tWelcome to file management system!\n");

    int task;
    printf("What do you want to do?\n1.Read from a file\n2.Write to a file\n");
    scanf("%d",&task);

    switch(task){
        case 1:{
            int readType;
            printf("What type of file do you want to read?\n1.Text\n2.Binary\n");
            scanf("%d",&readType);

            if(readType==1){
                char buffer[1024];
                int linecount=0;

                char filename[100];
                printf("Enter filename\n");
                scanf("%s",filename);

                fp=fopen(filename,"r");
                if(fp==NULL){
                    fprintf(stderr,"No such file in directory\n");
                    exit(1);
                }
                while(fgets(buffer,sizeof(buffer),fp)!=NULL){
                    printf("%d.%s",++linecount,buffer);
                }
                fclose(fp);
            }
            else if(readType==2){
                char filename[100];
                printf("Enter the filename\n");
                scanf("%s",filename);

                char c;
                fp=fopen(filename,"rb");
                if(fp==NULL){
                    fprintf(stderr,"No such file in directory\n");
                    exit(1);
                }
                while(fread(&c,sizeof(char),1,fp)>0){
                    printf("%d\n",(unsigned char)c);
                }
                fclose(fp);
            }else{
                printf("Invalid input!Enter 1 or 2\n");
            }
            break;
        }
        case 2:{
            int writeType;
            printf("What type of file do you want to write?\n1.Text\n2.Binary\n");
            scanf("%d",&writeType);

            char filename[100];
            printf("Enter filename\n");
            scanf("%s",filename);

            if(writeType==1){
                fp=fopen(filename,"w");
                if(fp==NULL){
                    fprintf(stderr,"No such file in directory\n");
                    exit(1);
                }
                char content[1024];
                printf("Enter your content\n");
                getchar();
                fgets(content,sizeof(content),stdin);

                fputs(content,fp);
                fclose(fp);
                printf("Data successfully written to file %s\n",filename);
            }
            else if(writeType==2){
                fp=fopen(filename,"wb");
                if(fp==NULL){
                    fprintf(stderr,"No such file in directory\n");
                    exit(1);
                }
                char content[1024];
                printf("Enter you content in binary\n");
                getchar();
                fgets(content,sizeof(content),stdin);

                fwrite(content,sizeof(char),sizeof(content),fp);
                fclose(fp);
                printf("Data successfully written to file %s\n",filename);
            }else{
                printf("Invalid input!Enter 1 or 2\n");
            }
            break;
        }
        default:
            printf("Invalid response.Enter 1 or 2\n");
            break;
    }
    return 0;
}