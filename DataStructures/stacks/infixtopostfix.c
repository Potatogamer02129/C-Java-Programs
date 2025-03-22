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

int precedence(char c)
{
    if (c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

void infixToPostfix()
{
    char postfix[50];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalnum(str[i]))
        {
            postfix[j++] = str[i];
        }
        else if (str[i] == '(')
        {
            push(str[i]);
        }
        else if (str[i] == ')')
        {
            while (Top >= 0 && stack[Top] != '(')
            {
                postfix[j++] = stack[Top];
                pop();
            }
            pop();
        }
        else
        {
            while (Top >= 0 && precedence(stack[Top]) >= precedence(str[i]))
            {
                postfix[j++] = stack[Top];
                pop();
            }
            push(str[i]);
        }
    }
    while (Top >= 0)
    {
        postfix[j++] = stack[Top];
        pop();
    }
    postfix[j] = '\0';
    printf("Postfix expression: %s\n", postfix);
}

int main()
{
    printf("Enter an infix expression: ");
    scanf("%s", str);
    infixToPostfix();
    return 0;
}

// Output:

// Enter an infix expression: (a+b)*c

// Postfix expression: ab+c*

