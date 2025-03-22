#include <stdio.h>

void PrintPrimesInRange(int start,int end);

int main(){
    int x,y;
    printf("Enter the start number: ");
    scanf("%d",&x);
    printf("Enter the end number: ");
    scanf("%d",&y);
    PrintPrimesInRange(x,y);
    return 0;
}

void PrintPrimesInRange(int start,int end){
int i,j,flg;
printf("Prime numbers between these numbers are :");
for(i=start;i<=end;i++){
    flg=1;
    for(j=2;j*j<=i;j++){
        if(i%j==0){
            flg=0;
            break;
        }
    }
    if(flg){
        printf(" %d",i);
    }
}
printf("\n");
}