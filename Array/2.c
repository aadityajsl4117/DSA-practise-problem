#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, q;

    printf("Input value:\n");
    scanf("%d %d", &p, &q);

    char *a = (char *)malloc(p * q * sizeof(char));

    int top = 0;
    int bottom = p - 1;
    int left = 0;
    int right = q - 1;

    char ch = 'Y';

    while(top <= bottom && right >= left)
    {
        for(int j = left; j <= right; j++)
            a[top * q + j] = ch;

        for(int j = left; j <= right; j++)
            a[bottom * q + j] = ch;

        for(int i = top; i <= bottom; i++)
            a[i * q + left] = ch;

        for(int i = top; i <= bottom; i++)
            a[i * q + right] = ch;

        top++;
        bottom--;
        left++;
        right--;

        if(ch == 'Y')
            ch = '0';
        else
            ch = 'Y';
    }

    printf("\nOutput:\n");

    for(int i = 0; i < p; i++)
    {
        for(int j = 0; j < q; j++)
        {
            printf("%c", a[i * q + j]);

            if(j != q - 1)
                printf(" ");
        }

        printf("\n");
    }

    free(a);

    return 0;
}