#include <stdio.h>

int LCD(int x,int y){
    for(int i=2;i<=x;i++){
        if(x%i==0 && y%i==0){
            return i;
        }
    }
    return 0;
}

void main(){
    int n1=10,n2=18;
    if(LCD(n1,n2)==0)
        printf("No least common divisor other than 1\n");
    else
        printf("Least common divisor of this number other than 1 is %d\n",LCD(n1,n2));    
}

