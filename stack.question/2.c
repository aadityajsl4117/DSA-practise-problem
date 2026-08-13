#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

typedef struct mystack
{
    node *top;
} mystack;

void push(int data, mystack *ms)
{
    node *newnode = (node *)malloc(sizeof(node));

    newnode->data = data;
    newnode->next = ms->top;
    ms->top = newnode;
}


int pop(mystack *ms)
{
    if (ms->top == NULL)
    {
        return -1;
    }

    node *temp = ms->top;
    int value = temp->data;

    ms->top = ms->top->next;

    free(temp);

    return value;
}

void merge(mystack *ms1, mystack *ms2)
{
    if (ms1->top == NULL)
    {
        ms1->top = ms2->top;
        return;
    }

    node *temp = ms1->top;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = ms2->top;
}


int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    mystack ms1, ms2;

    ms1.top = NULL;
    ms2.top = NULL;

    int x;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        push(x, &ms1);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &x);
        push(x, &ms2);
    }


    merge(&ms1, &ms2);


    node *temp = ms1.top;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}