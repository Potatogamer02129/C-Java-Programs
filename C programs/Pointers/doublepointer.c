#include <stdio.h>

int main(){
    int a=69;
    int *p=&a;
    int **dp=&p;
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%p\n",&p);
    printf("%p\n",dp);
    printf("%p\n",*dp);
    printf("%d\n",**dp);
}