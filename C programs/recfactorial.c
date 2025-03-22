#include <stdio.h>

int factorial(int x);

int main()
{
	int n;
	printf("Enter a number to get its factorial :");
	scanf("%d",&n);
	int result=factorial(n);
	printf("%d",result);
	return 0;
}

int factorial(int x){
	if (x>0){
		return x * factorial(x-1);
	}else{
		return 1;
	}
}
