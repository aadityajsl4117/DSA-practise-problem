#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    // Step 1: Sort the array
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    // Step 2: Swap adjacent elements
    for(int i = 0; i < n - 1; i += 2)
    {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }

    // Print result
    for(int i = 0; i < n; i++)
    {
        printf("%d", array[i]);

        if(i < n - 1)
            printf(" ");
    }

    return 0;
}