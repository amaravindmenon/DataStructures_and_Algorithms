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
