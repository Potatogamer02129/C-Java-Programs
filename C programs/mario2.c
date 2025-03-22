#include <stdio.h>

int main()  // Use 'int main()' instead of 'void main()'
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  // Use '%d' for reading integers

    for (int i = 0; i < num; i++)  // Use 'num' directly, not '&num'
    {
        printf("#\n");  // Removed the semicolon after the for loop
    }

    return 0;  // Return 0 to indicate successful execution
}
