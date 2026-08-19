#include <stdio.h>

void convert(int n)
{
    int values[] = {
        1000, 900, 500, 400, 100, 90, 50,
        40, 10, 9, 5, 4, 1
    };

    char martian[] = {
        'R', 'B', 'G', 'B', 'B', 'Z', 'P',
        'Z', 'Z', 'B', 'W', 'B', 'B'
    };

    int i;

    for(i = 0; i < 13; i++)
    {
        while(n >= values[i])
        {
            printf("%c", martian[i]);
            n = n - values[i];
        }
    }

    printf("\n");
}

int main()
{
    int n ;
    int arr[5];
    int count=5;
    int i;


    printf("Input value:\n");

    for(i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nOutput:\n");

    for(i = 0; i < count; i++)
    {
        convert(arr[i]);
    }

    return 0;
}