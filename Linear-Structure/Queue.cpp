#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

Queue *createQueue()
{
    int s;
    cout << "Enter the size of queue ";
    cin >> s;
    Queue *newQueue = (Queue *)malloc(sizeof(Queue));
    newQueue->arr = (int *)malloc(s * sizeof(int));
    newQueue->size = s;
    newQueue->f = 0;
    newQueue->r = 0;
    return newQueue;
}

int isEmpty(struct Queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enQueue(struct Queue *q)
{
    if (isFull(q))
    {
        cout << "queue is full" << endl;
        return;
    }
    else
    {
        int val;
        cout << "Enter the value" << endl;
        cin >> val;
        q->arr[q->r] = val;
        q->r++;
    }
}

int deQueue(struct Queue *q)
{
    if (isEmpty(q))
    {
        cout << "queue is empty" << endl;
        return -1;
    }
    else
    {
        int val;
        val = q->arr[q->f];
        q->f++;
        cout<<"Pop element is: "<<val<<endl;
        return val;
    }
}

void peek(struct Queue *q)
{
    if (isEmpty(q))
    {
        cout << "queue is empty" << endl;
        return;
    }
    else
    {
        cout << "Peek is: " << q->arr[q->f]<<endl;
    }
}

void display(struct Queue *q)
{
    if (isEmpty(q))
    {
        cout << "queue is empty" << endl;
        return;
    }
    else
    {
        for (int i = q->f; i < q->r; i++)
        {
            cout<<q->arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    struct Queue *newQueue = createQueue();
    enQueue(newQueue);
    enQueue(newQueue);
    enQueue(newQueue);
    peek(newQueue);
    deQueue(newQueue);
    display(newQueue);
}
