#include <stdio.h>

#define MAX 1000

void calculateSpan(int price[], int n, int S[])
{
    int stack[MAX];
    int top = -1;
    S[0] = 1;
    stack[++top] = 0;

    for (int i = 1; i < n; i++)
    {

        while (top != -1 && price[stack[top]] <= price[i])
        {
            top--;
        }


        if (top == -1)
        {
            S[i] = i + 1;
        }
        else
        {
            S[i] = i - stack[top];
        }
        stack[++top] = i;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    int price[MAX];
    int S[MAX];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &price[i]);
    }

    calculateSpan(price, n, S);

    printArray(S, n);

    return 0;
}