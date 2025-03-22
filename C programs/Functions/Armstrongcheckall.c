#include <stdio.h>

void ArmstrongNumLot(int x);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    ArmstrongNumLot(n);
}

void ArmstrongNumLot(int x){
        for(int j=1;j<=x;j++){
        int r,sum=0,len=0,power,temp=j,i;
    while(temp!=0){
        temp=temp/10;
        len++;
    }
    temp=j;
    while(temp!=0){
    r=temp%10;
    for(i=1,power=1;i<=len;i++){
        power=power*r;
    }
    sum=sum+power;
    temp=temp/10;
    }
    if(sum==j){
        printf(" %d",j);
    }
    }
    
}