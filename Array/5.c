#include <stdio.h>

int main()
{
    char words[13][10] = {
        "ZERO", "ONE", "TWO", "THREE",
        "FOUR", "FIVE", "SIX", "SEVEN",
        "EIGHT", "NINE", "TEN", "ELEVEN", "TWELVE"
    };

    int n;
    int arr[100];
    int count = 0;
    int letters[26] = {0};

    while(scanf("%d", &n) == 1)
    {
        if(n == 999)
            break;

        arr[count] = n;
        count++;

        for(int i = 0; words[n][i] != '\0'; i++)
        {
            letters[words[n][i] - 'A']++;
        }
    }

    printf("Output:\n ");
    for(int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("0999.");

    
    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < letters[i]; j++)
        {
            printf("%c ", 'A' + i);
        }
    }

    return 0;
}