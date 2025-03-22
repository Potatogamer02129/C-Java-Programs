#include <stdio.h>

void palindrome(int n){
int r=0,temp;
if(n>=0){
temp=n;
while(temp!=0){
r=(r*10) + temp%10;
temp=temp/10;s
}
if(r==n){
    printf("The number entered is a palindrome\n");
}
else{
    printf("The number entered is not a palindrome\n");
}
}
else{
printf("The number entered is not a palindrome\n");
}
}

void main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
palindrome(n);
}