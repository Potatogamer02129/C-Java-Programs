#include <stdio.h>

void main(){
    const int i=10;
    const int *ptr=&i;
    // *ptr=20;
    printf("%d \n",i);
    printf("%d\n",*ptr);
}