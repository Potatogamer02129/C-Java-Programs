#include <stdio.h>

void main(){
    int i=10;
    int *p=&i;
    printf("%d\n",i);
    printf("%d\n",*p);
    printf("%p\n",p);
}