#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

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

/**
 * traverse list
*/

void LinkedListTraversal(struct Node *main)
{
    if (main != NULL)
    {
        cout << "Invalid traversal" << endl;
    }
    else
    {
        Node *temp = main;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != main);
        cout << endl;
    }
}

Node *insertAtStart(struct Node *main)
{
    Node *newNode = createNewNode();
    if (main == NULL)
    {
        main = newNode;
        newNode->next = main;
        return main;
    }
    else
    {        
        Node *last = main;

        while (last->next != main)
        {
            last = last->next;
        }
        
        last->next = newNode;
        newNode->next = main;
        return main;
    }
}

int main()
{
    Node *start = NULL;
    start = insertAtStart(start);
    start = insertAtStart(start);
    start = insertAtStart(start);
    LinkedListTraversal(start);
}
