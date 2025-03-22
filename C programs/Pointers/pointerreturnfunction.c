#include <stdio.h>

int* sum(int x,int y){
    int sum;
    int *p=&sum;
    sum=x+y;
    return p;     
}

int main(){
    int n1=2,n2=5;
    printf("The sum of these number is %d\n",*(sum(n1,n2)));
}