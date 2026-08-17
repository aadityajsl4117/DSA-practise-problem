#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX][MAX];
int top = -1;

void push(char str[])
{
    top++;
    strcpy(stack[top], str);
}

void pop(char str[])
{
    strcpy(str, stack[top]);
    top--;
}

int main()
{
    char exp[MAX];
    char op1[MAX], op2[MAX], result[MAX];

    scanf("%s", exp);

    for (int i = 0; exp[i] != '\0'; i++)
    {
        /* Operand */
        if ((exp[i] >= 'A' && exp[i] <= 'Z') ||
            (exp[i] >= 'a' && exp[i] <= 'z') ||
            (exp[i] >= '0' && exp[i] <= '9'))
        {
            char temp[2];

            temp[0] = exp[i];
            temp[1] = '\0';

            push(temp);
        }

        /* Operator */
        else
        {
            pop(op2);
            pop(op1);

            result[0] = exp[i];
            result[1] = '\0';

            strcat(result, op1);
            strcat(result, op2);

            push(result);
        }
    }

    printf("%s", stack[top]);

    return 0;
}
