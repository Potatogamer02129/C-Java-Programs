#include <stdio.h>
void main()
{
    char DNA[100];
    int i,cnt=0,strlen;
    printf("Enter a string: ");
    scanf("%[^\n]",DNA);
    while(DNA[strlen]!='\0'){
        strlen++;
    }
    for(i=strlen-1;i>=0;i--)
    {
        if(DNA[i]!='A')
            break;
        else
            cnt++;
    }
    if(cnt>=5)
        printf("This DNA has a Poly A tail\n");
    else
        printf("This DNA doesn't have a Poly A tail\n");
}