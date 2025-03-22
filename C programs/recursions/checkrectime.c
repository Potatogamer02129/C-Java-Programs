#include <stdio.h>

void count(int n,int i){
    if(i<n){
        count(n,i+1);
    }
}

void main(){
    int num;
    scanf("%d",&num);
    count(num,0);
}