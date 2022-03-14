#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[]){
    if(argv>1){
        if(strcmp(argv[1]."--help")==0){
        printf("this program to move cut rename files");
    }
    else{
        char path[200],com[200],t;
        while(1){

        printf("1-copy file \n 2-move file \n 3-Exit");
        int c;
        t=getchar();
        scanf("%d",&c);

        switch(c){

            case 1:
            strcpy(com,"cp");
            printf("enter path of the file and destination");
            gets(path);
            strcat(com,path);
            system(com);
            break;

            case 2:
            strcpy(com,"mv");
            printf("enter path of the file and destination");
            gets(path);
            strcat(com,path);
            system(com);
            break;

            case 3:wxit(0);
            default:printf("error");
        }



    }

    }

    }

    

    
     










    return 0;
}