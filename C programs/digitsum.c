#include <stdio.h>
int main(){
	int r,sum=0,n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	while(n!=0){
		r=n%10;
		sum+=r;
		n=n/10;
	}
	printf("The sum of all the digits in this entered number is %d",sum);
}
