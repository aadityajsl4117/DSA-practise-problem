#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    long long a[N];
    int next[N];
    long long xr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &a[i]);
    }


    int stack[N];
    int top = -1;

    for (int i = N - 1; i >= 0; i--)
    {
        while (top != -1 && a[stack[top]] <= a[i])
        {
            top--;
        }

        if (top == -1)
            next[i] = -1;
        else
            next[i] = stack[top];

        stack[++top] = i;
    }

 
    long long answer = 0;

    for (int i = N - 1; i >= 0; i--)
    {
        xr[i] = a[i];

        if (next[i] != -1)
        {
            xr[i] = a[i] ^ xr[next[i]];
        }

        if (xr[i] > answer)
        {
            answer = xr[i];
        }
    }

    printf("%lld", answer);

    return 0;
}