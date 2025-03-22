#include <stdio.h>

int isFibonacci(int n){
    int i,x=0,y=1;
    for(i=0;i<=n;i++){
        if(x==n || y==n){
            return 1;
        }
    x=x+y;
    y=x+y;
    }
    return 0;
}

void main(){
    int num,flg;
    printf("Enter a number to check if its a fibonacci number: ");
    scanf("%d",&num);
    flg=isFibonacci(num);
    if(flg)
    printf("It occurs in the fibonacci sequence");
    else
    printf("Its doesnt occur in the fibonacci sequence");
}