#include <stdio.h>

int main()
{
    char stack[1000];
    int top = -1;

    char exp[1000];

    scanf("%s", exp);

    for (int i = 0; exp[i] != '\0'; i++)
    {
        char ch = exp[i];


        if (ch == '(' || ch == '{' || ch == '[')
        {
            top++;
            stack[top] = ch;
        }

        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (top == -1)
            {
                printf("Not Balanced");
                return 0;
            }

            char temp = stack[top];
            top--;

            if ((ch == ')' && temp != '(') ||
                (ch == '}' && temp != '{') ||
                (ch == ']' && temp != '['))
            {
                printf("Not Balanced");
                return 0;
            }
        }
    }

    if (top == -1)
        printf("Balanced");
    else
        printf("Not Balanced");

    return 0;
}