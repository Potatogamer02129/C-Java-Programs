#include <stdio.h>

void main(){
    char source[25];
    char destination[25];
    char buffer[255];
    printf("Enter a source file: ");
    scanf("%s",source);
    printf("Enter the destination file: ");
    scanf(" %s",destination);
    FILE *fp1 = fopen(source,"r");
    FILE *fp2 = fopen(destination,"w");
    while((fgets(buffer,100,fp1))!=NULL){
        fputs(buffer,fp2);
    }
    fclose(fp1);
    fclose(fp2);

}