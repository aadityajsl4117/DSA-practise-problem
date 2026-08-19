#include <stdio.h>

int main()
{
    int money, n;

    printf("Input value:\n");
    scanf("%d %d", &money, &n);

    char name[10][50];
    int price[10];
    int bought[10] = {0};

    for(int i = 0; i < n; i++)
    {
        scanf("%s %d", name[i], &price[i]);
    }

    int remaining = money;
    int count = 0;

    while(1)
    {
        int min = 1000000;
        int pos = -1;

        for(int i = 0; i < n; i++)
        {
            if(bought[i] == 0 && price[i] < min)
            {
                min = price[i];
                pos = i;
            }
        }

        if(pos == -1 || min > remaining)
            break;

        bought[pos] = 1;
        remaining = remaining - price[pos];
        count++;
    }

    printf("Output:\n");

    for(int i = 0; i < n; i++)
    {
        if(bought[i] == 1)
            printf("I can afford %s\n", name[i]);
        else
            printf("I can't afford %s\n", name[i]);
    }

    if(count == 0)
        printf("I need more Dollar!\n");
    else
        printf("%d\n", remaining);

    return 0;
}