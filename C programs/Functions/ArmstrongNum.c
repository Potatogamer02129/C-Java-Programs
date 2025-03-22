#include <stdio.h>

void ArmstrongNum(int x);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    ArmstrongNum(n);
}

void ArmstrongNum(int x){
    int i,len=0,power,temp,sum=0,r;
    temp=x;
    while(temp!=0){
        temp=temp/10;
        len++;
    }
    temp=x;
    while(temp!=0){
    r=temp%10;
    for(i=1,power=1;i<=len;i++){
        power=power*r;
    }
    sum=sum+power;
    temp=temp/10;
    }
    if(sum==x){
        printf("The number is a armstrong number\n");
    }
    else{
        printf("The number is not a armstrong number\n");
    }
}