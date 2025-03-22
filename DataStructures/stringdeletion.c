#include <stdio.h>

void deleteChar(char* str, char ch)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            int j = i;
            while (str[j] != '\0')
            {
                str[j] = str[j + 1];
                j++;
            }
        }
        else
        {
            i++;
        }
    }
}

void main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    char ch;
    printf("Enter the character to delete: ");
    scanf("%c", &ch);
    deleteChar(str, ch);
    printf("String after deleting '%c': %s\n", ch, str);
}