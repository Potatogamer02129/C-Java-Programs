#include <stdio.h>

int Sum(int x){
    if(x==0){
        return 0;
    }
    else{
        return x+Sum(x-1);
    }
}

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The sum of natural numbers upto %d is %d\n",n,Sum(n));
}