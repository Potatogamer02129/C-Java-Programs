#include <stdio.h>

int Power(int x,int y){
if(y==0){
    return 1;
}
else{
    return x*Power(x,y-1);
}
}

void main(){
int x,y;
printf("Enter a number: ");
scanf("%d",&x);
printf("Enter it's power: ");
scanf("%d",&y);
printf("%d raised to %d equals: %d\n",x,y,Power(x,y));
}