#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};

/**
 * Create node
*/

Node *createNewNode()
{
    cout << "Enter the number" << endl;
    int n;
    cin >> n;
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = n;
    newNode->next = NULL;
    return newNode;
}

void enQueue()
{
    struct Node *newNode = createNewNode();
    if (newNode == NULL)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        if (f == NULL)
        {
            f = r = newNode;
        }
        else
        {
            r->next = newNode;
            r = newNode;
        }
    }
}

void deQueue()
{
    if (f == NULL)
    {
        cout << "Queue is Empty" << endl;
        return;
    }else{
        struct Node *ptr = f;
        int val = f->data;
        f = f->next;
        free(ptr);
        cout<<"dequeue value is: "<<val<<endl;
    }
}

void LinkedListTraversal()
{
    if (f == NULL)
    {
        cout << "Queue is Empty" << endl;
        return;
    }
    struct Node *main = f;
    while (main != NULL)
    {
        cout << main->data << " ";
        main = main->next;
    }
    cout << endl;
}

int main()
{
    LinkedListTraversal();
    enQueue();
    enQueue();
    enQueue();
    deQueue();
    LinkedListTraversal();
    return 0;
}
