#include <stdio.h>

int main()
{
    int r, c;

    printf("Input value:\n");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    int arrTemp[r][c];

    int i, j;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
            arrTemp[i][j] = arr[i][j];
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(arr[i][j] == 1)
            {
                int k;

                for(k = 0; k < c; k++)
                    arrTemp[i][k] = 1;

                for(k = 0; k < r; k++)
                    arrTemp[k][j] = 1;
            }
        }
    }

    printf("\nOutput:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d", arrTemp[i][j]);

            if(j < c - 1)
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}