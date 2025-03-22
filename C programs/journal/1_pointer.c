#include <stdio.h>

void main(){
    int a=5;
    int b=10;
    int temp;
    int *pa=&a;
    int *pb=&b;
    int *ptemp=&temp;
    *ptemp=*pa;
    *pa=*pb;
    *pb=*ptemp;
    printf("%d  %d",*pa,*pb);
}