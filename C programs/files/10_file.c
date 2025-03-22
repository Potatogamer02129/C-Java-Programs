#include <stdio.h>
#include <stdlib.h>

void main(){
    char filepath[20];
    char buffer[255];
    int acnt=0;
    int scnt=0;
    printf("Enter a File name: ");
    scanf("%s",filepath);
    FILE *fp = fopen(filepath,"r");
    char ch;
    if(fp==NULL){
        printf("The file doesnt exist\n");
        return;
    }
    else{
        while((ch=fgetc(fp))!=EOF)
        {
            acnt++;
            printf("%c",ch);
        }
    }
    fclose(fp);
    printf("\n\n\nThe complementary rna Sequence of this sequence is: ");
    fp = fopen(filepath,"r");
    while((ch=fgetc(fp))!=EOF){
        ch = toupper(ch);
        switch (ch)
        {
        case 'A':
            printf("U");
            break;
        case 'T':
            printf("A");
            break;
        case 'G':
            printf("C");
            break;
        case 'C':
            printf("G");
            break;
        
        default:
            break;
        }
        
    }
        printf("\nThis file has %d characters\n",acnt);

}