#include <stdio.h>
int main()
{
	int x,y,n;
	printf("For multiplication Type 1\n");
	printf("For division       Type 2\n");
	printf("For Addition       Type 3\n");
	printf("For subtraction    Type 4\n");
	printf("For getting Power  Type 5\n");
        printf("Your requirement       : ");
        scanf("%d",&n);
        switch(n)
	{
		case 1:
			printf("Enter 1st Number: ");
			scanf("%d",&x);
			printf("Enter 2nd Number: ");
			scanf("%d",&y);
			printf("The result of the numbers is :%d\n",x*y);
			break;
		case 2:
			printf("Enter 1st Number: ");
			scanf("%d",&x);
			printf("Enter 2nd Number: ");
			scanf("%d",&y);
			printf("The result of the numbers is :%d\n",x/y);
			break;
		case 3:
			printf("Enter 1st Number: ");
			scanf("%d",&x);
			printf("Enter 2nd Number: ");
			scanf("%d",&y);
			printf("The result of the numbers is :%d\n",x+y);
			break;
		case 4:
			printf("Enter 1st Number: ");
			scanf("%d",&x);
			printf("Enter 2nd Number: ");
			scanf("%d",&y);
			printf("The result of the numbers is :%d\n",x-y);
			break;
	}	
	}	
