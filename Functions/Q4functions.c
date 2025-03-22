#include <stdio.h>

int Factorial(int n){
    int i,r=1;
    for(i=1;i<=n;i++){
    r*=i;
    }
    return r;
}

void main(){
    int num;
    printf("Enter a number to gets it's Factorial: ");
    scanf("%d",&num);
    printf("The factorial of %d is %d\n",num,Factorial(num));
}