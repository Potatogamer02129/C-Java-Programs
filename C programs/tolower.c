#include <stdio.h>
#include <ctype.h>
int main()
{
	char alpha;
	printf("Enter a Alphabet :");
	scanf("%c",&alpha);
	if(alpha>=65 && alpha<97)
	{
		printf("The smaller letter for this alphabet is : %c",tolower(alpha));
	}
	else{
		printf("The bigger letter for this alphabet is : %c",toupper(alpha));

	}
}
