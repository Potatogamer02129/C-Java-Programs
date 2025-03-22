#include <stdio.h>

void main(){
    char filepath[20];
    char buffer[255];
    printf("Enter a File name: ");
    scanf("%s",filepath);
    FILE *fp = fopen(filepath,"r");
    if(fp==NULL){
        printf("The file doesnt exist\n");
        return;
    }
    else{
        while((fgets(buffer,100,fp))!=NULL)
        {
            printf("%s",buffer);
        }
    }
    fclose(fp);
}