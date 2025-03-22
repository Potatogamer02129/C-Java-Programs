#include <stdio.h>

int larger(int x,int y){
    if(x>y)
    return x;
    else
    return y;
}

void main(){
    int n1=10,n2=5;
    printf("The greater of the two number is %d\n",larger(n1,n2));
}