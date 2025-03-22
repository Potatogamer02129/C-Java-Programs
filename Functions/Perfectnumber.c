#include <stdio.h>

int PerfectNum(int num);

int main(){
    int x;
    do{
    printf("Enter 0(zero) to exit");    
    printf("Enter a Number: ");
    scanf("%d",&x);
    PerfectNum(x);
    }while(x!=0);
    return 10;
}

int PerfectNum(int num){
    int i,sum=0;
    if(num<6){
        printf("The number is not a perfect number\n");
        return 0;
    }
    for(i=1;i<=num/2;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        printf("The number is a Perfect number\n");
        return 1;
    }
    else{
        printf("The number is not a Perfect number\n");
        return 0;
    }
}