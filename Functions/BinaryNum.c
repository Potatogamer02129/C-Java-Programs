#include <stdio.h>

void BinaryNum(int x);

int main(int argv,char *argc[]){
int n;

printf("Enter a Number to convert it into a Binary number: ");
scanf("%d",&n);
BinaryNum(n);
return 0;
}

void BinaryNum(int x){
int i=0,j;
int bin[33];
while(x!=0){
    bin[i]=x%2;
    x=x/2;
    i++;
}
for(j=i-1;j>=0;j--){
    printf("%d",bin[j]);
}
}