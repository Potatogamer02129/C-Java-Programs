#include <stdio.h>

void PrintFactors(int num);

int main(){
    int x;
    printf("Enter a Number to get its all the factors: ");
    scanf("%d",&x);
    PrintFactors(x);
}

void PrintFactors(int num){
    int i;
    printf("All the factors of %d is:",num);
    for(i=1;i<=num;i++){
        if(num%i==0){
            printf(" %d",i);
        }
    }
}