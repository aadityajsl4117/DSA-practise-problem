#include <stdio.h>

int main()
{
    int T;

    printf("Input value:\n");
    scanf("%d", &T);

    int answers[T];

    for(int t = 0; t < T; t++)
    {
        int n;
        scanf("%d", &n);

        int a[100];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int total = 0;

        for(int i = 0; i < n; i++)
        {
            int treats = 1;

            for(int j = 0; j < n; j++)
            {
                if(a[j] < a[i])
                {
                    int already = 0;

                    for(int k = 0; k < j; k++)
                    {
                        if(a[k] == a[j])
                        {
                            already = 1;
                            break;
                        }
                    }

                    if(already == 0)
                    {
                        treats++;
                    }
                }
            }

            total += treats;
        }

        answers[t] = total;
    }

    printf("\nOutput:\n");

    for(int t = 0; t < T; t++)
    {
        printf("%d\n", answers[t]);
    }

    return 0;
}