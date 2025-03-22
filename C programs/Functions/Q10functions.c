#include <stdio.h>

int SumOfDigits(int x){
    int sum=0,Digit;
    while(x!=0){
    Digit=x%10;
    sum+=Digit;
    x/=10;
    }
    return sum;
}

void main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    printf("The sum of the digits of the number %d is %d\n",num,SumOfDigits(num));
}