#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char str[50];
int stack[50];
int Top = -1;

void pop()
{
    if (Top >= 0)
    {
        Top--;
    }
    else
    {
        printf("Stack underflow\n");
    }
}

void push(int x)
{
    if (Top < 49)
    {
        Top++;
        stack[Top] = x;
    }
    else
    {
        printf("Stack overflow\n");
    }
}

int topf()
{
    if (Top >= 0)
    {
        return stack[Top];
    }
    else
    {
        printf("Stack is empty\n");
        return -1; // Return an invalid value to indicate error
    }
}

int calculate()
{
    for (int i = 0; str[i] != '\0'; i++)
    {
    if (str[i] == '+' || str[i] == '/' || str[i] == '*' || str[i] == '-')
    {
        int op1 = topf(); // Retrieve the top element (second operand)
        pop();            // Remove the top element
        int op2 = topf(); // Retrieve the next element (first operand)
        pop();            // Remove the next element

        switch (str[i])
        {
            case '+': push(op2 + op1); break; // Perform addition
            case '-': push(op2 - op1); break; // Perform subtraction
            case '*': push(op2 * op1); break; // Perform multiplication
            case '/': push(op2 / op1); break; // Perform division
        }
    }

        else if (isdigit(str[i]))
        {
            int num = 0;
            while (isdigit(str[i]))
            {
                num = num * 10 + (str[i] - '0');
                i++;
            }
            i--; // Adjust for the increment in the for loop
            push(num);
        }
    }
    return topf();
}

int main()
{
    printf("Enter a postfix expression: ");
    scanf("%[^\n]", str);
    int result = calculate();
    printf("The result is: %d\n", result);
    return 0;
}