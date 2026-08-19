#include <stdio.h>

int main()
{
    int T;

    printf("Input value:\n");
    scanf("%d", &T);

    while(T--)
    {
        int n;
        scanf("%d", &n);

        int a[10];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int found = 0;

        printf("Output:\n");

        for(int i = 0; i < n - 1; i++)
        {
            if(a[i] < a[i + 1])
            {
                int buy = i;

                while(i < n - 1 && a[i] < a[i + 1])
                {
                    i++;
                }

                int sell = i;

                printf("(%d %d) ", buy, sell);

                found = 1;
            }
        }

        if(!found)
        {
            printf("No Profit");
        }

        printf("\n");
    }

    return 0;
}