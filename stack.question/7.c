#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    long long A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }

    for (int i = 0; i < N; i++)
    {
        int F = -1;
        int G = -1;

        for (int j = i + 1; j < N; j++)
        {
            if (A[i] < A[j])
            {
                F = j;
                break;
            }
        }


        if (F == -1)
        {
            printf("-1 ");
            continue;
        }

    
        for (int j = F + 1; j < N; j++)
        {
            if (A[F] > A[j])
            {
                G = j;
                break;
            }
        }


        if (G == -1)
        {
            printf("-1 ");
        }
        else
        {
            printf("%lld ", A[G]);
        }
    }

    return 0;
}