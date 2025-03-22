#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 50

char stack[MAX];
int Top = -1;
char postfix[MAX];

void push(char x)
{
    if (Top < MAX - 1)
    {
        Top++;
        stack[Top] = x;
    }
    else
    {
        printf("Stack overflow\n");
    }
}

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

char top()
{
    if (Top >= 0)
    {
        return stack[Top];
    }
    else
    {
        printf("Stack is empty\n");
        return '\0'; // Return an invalid value to indicate error
    }
}

int precedence(char x)
{
    switch (x)
    {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '(':
            return 0;
    }
    return -1;
}

void infixToPostfix(char* str)
{
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]))
        {
            while (isdigit(str[i]))
            {
                postfix[j++] = str[i++];
            }
            postfix[j++] = ' ';
            i--;
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
}

int evaluatePostfix(char* str)
{
    int stack[MAX];
    int Top = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]))
        {
            int num = 0;
            while (isdigit(str[i]))
            {
                num = num * 10 + (str[i] - '0');
                i++;
            }
            i--; // Adjust for the increment in the for loop
            stack[++Top] = num;
        }
        else if (str[i] == ' ')
        {
            continue;
        }
        else
        {
            int op1 = stack[Top--];
            int op2 = stack[Top--];
            switch (str[i])
            {
                case '+': stack[++Top] = op2 + op1; break;
                case '-': stack[++Top] = op2 - op1; break;
                case '*': stack[++Top] = op2 * op1; break;
                case '/': stack[++Top] = op2 / op1; break;
            }
        }
    }
    return stack[Top];
}

int main()
{
    char infix[MAX];
    printf("Enter an infix expression: ");
    fgets(infix, MAX, stdin);
    infix[strcspn(infix, "\n")] = '\0'; // Remove newline character

    infixToPostfix(infix);
    printf("Postfix expression: %s\n", postfix);

    int result = evaluatePostfix(postfix);
    printf("The result is: %d\n", result);

    return 0;
}