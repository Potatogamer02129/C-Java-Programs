#include <stdio.h>

void PrimeCheck(int x);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    PrimeCheck(n);
    return 0;
}

void PrimeCheck(int x){
    if(x<=1){
        printf("The number entered is not a prime number\n");
        return;
    }
    int i,flg=1;
    for(i=2;i<x;i++){
        if(x%i==0){
            flg=0;
            break;
        }
    }
    if(flg){
        printf("The number entered is a prime number\n");
    }
    else{
       printf("The number entered is not a prime number\n");
    }
}