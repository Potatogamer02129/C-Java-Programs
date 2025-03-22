#include <stdio.h>

int ArmstrongNum(int x);

void main(){
    int n,flg;
    printf("Enter a number to check if it is a Armstrong number: ");
    scanf("%d",&n);
    flg=ArmstrongNum(n);
    if(flg)
    printf("It is a Armstrong Number\n");
    else
    printf("Not a Armstrong Number\n");
}

int ArmstrongNum(int x){
int digit,temp,sum=0,len=0,power;
temp=x;
while(temp!=0){
    temp=temp/10;
    len++;
}
temp=x;
while(temp!=0){
    digit=temp%10;
    power=1;
    for(int i=1;i<=len;i++){
    power=power*digit;
    }
    sum=sum+power;
    temp=temp/10;
}
return (x==sum);    
}