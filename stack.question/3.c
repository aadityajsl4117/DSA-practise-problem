#include <stdio.h>

int digitSum(int n)
{
    int sum = 0;

    while (n > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }

    return sum;
}

int main()
{
    int N, Q;

    scanf("%d %d", &N, &Q);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    while (Q--)
    {
        int i;
        scanf("%d", &i);

        int answer = -1;

        for (int j = i; j < N; j++)
        {
            if (arr[i - 1] < arr[j])
            {
                if (digitSum(arr[i - 1]) > digitSum(arr[j]))
                {
                    answer = j + 1;
                    break;
                }
            }
        }

        printf("%d ", answer);
    }

    return 0;
}