#include <stdio.h> 

int Factorial(int x){
    if(x<=1){
        return 1;
    }
    else{
        return x*Factorial(x-1);
    }
}

int main(){
    int n;
    printf("Enter a number to get its factorial: ");
    scanf("%d",&n);
    printf("%d\n",Factorial(n));
}