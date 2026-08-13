#include <stdio.h>

#define MAX 5

int arr[MAX];

int top1 = -1;
int top2 = -1;

void push1(int x)
{
    top1++;
    arr[top1] = x;
}



void push2(int x)
{
    top2++;
    arr[MAX - 1 - top2] = x;
}



int pop1()
{
    int x = arr[top1];
    top1--;
    return x;
}



int pop2()
{
    int x = arr[MAX - 1 - top2];
    top2--;
    return x;
}


int main()
{
    int x;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x);

        if (i % 2 == 0)
            push1(x);
        else
            push2(x);
    }

    printf("Popped element from stack1 is:%d\n", pop1());
    printf("Popped element from stack2 is:%d\n", pop2());

    return 0;
}