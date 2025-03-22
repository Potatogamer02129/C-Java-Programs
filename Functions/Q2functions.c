#include <stdio.h>

int isPrimeNum(int n){
    int i;
    for(i=2;i*i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

void main(){
    int num,flg;
    printf("Enter a number to check if its a prime no. or not: ");
    scanf("%d",&num);
    flg=isPrimeNum(num);
    if(flg)
    printf("It is a Prime Number\n");
    else
    printf("not a prime number\n");
}