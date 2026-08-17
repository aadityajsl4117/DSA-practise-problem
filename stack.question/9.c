#include <stdio.h>

#define MAX 1000

int queue[MAX];
int front = 0;
int rear = 0;
int size = 0;


void enqueue(int x)
{
    queue[rear] = x;
    rear++;
    size++;
}


int dequeue()
{
    int x = queue[front];
    front++;
    size--;
    return x;
}

/* Push into stack using one queue */
void push(int x)
{
    int oldSize = size;

    enqueue(x);

    /* Move all old elements behind x */
    for (int i = 0; i < oldSize; i++)
    {
        int temp = dequeue();
        enqueue(temp);
    }
}

/* Pop from stack */
int pop()
{
    return dequeue();
}

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    int x;

    /* Push n elements */
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        push(x);
    }

    printf("top of element %d\n", queue[front]);


    for (int i = 0; i < m; i++)
    {
        pop();
    }


    printf("top of element %d\n", queue[front]);

    return 0;
}