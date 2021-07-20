#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
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
    newNode->prev = NULL;
    return newNode;
}

void LinkedListTraversal(struct Node *main)
{
    if (main == NULL)
    {
        cout << "Invalid traversal" << endl;
    }
    else
    {
        Node *temp = main;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

void ReverseListTraversal(struct Node *main)
{
    if (main == NULL)
    {
        cout << "Invalid traversal" << endl;
    }
    else
    {
        Node *temp = main;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
}

Node *insertAtStart(struct Node *main)
{
    Node *newNode = createNewNode();
    if (main == NULL)
    {
        return newNode;
    }
    else
    {
        Node *temp = main;
        newNode->next = main;
        main->prev = newNode;
        return newNode;
    }
}

Node *insertAtAfter(Node *main)
{
    Node *newNode = createNewNode();
    if (main == NULL)
    {
        return newNode;
    }
    else
    {
        int n;
        cout << "Enter the position which after u want to insert";
        cin >> n;
        int i = 1;
        Node *temp = main;

        while (i < n)
        {
            temp = temp->next;
            i++;
        }

        newNode->prev = temp;
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;

    }
    return main;
}

Node *insertAtLast(struct Node *main)
{
    Node *newNode = createNewNode();
    if (main == NULL)
    {
        return newNode;
    }
    else
    {
        Node *temp = main;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        newNode->prev = temp;
        temp->next = newNode;
    }
    return main;
}

Node *deleteAtFirst(struct Node *main)
{
    if (main == NULL)
    {
        cout << "List is empty" << endl;
        return main;
    }
    else
    {
        Node *temp = main;
        main->next->prev = NULL;
        Node *t = main->next;
        free(temp);
        return t;
    }
    return main;
}

Node *deleteAtAfter(Node *main)
{
    if (main == NULL)
    {
        cout << "List is empty" << endl;
        return main;
    }
    else
    {
        int n;
        cout << "Enter the position which after u want to insert: ";
        cin >> n;
        int i = 1;
        Node *temp = main;
        while (i < n)
        {
            temp = temp->next;
            i++;
        }
        Node *del = temp->next;
        temp->next = temp->next->next;
        temp->next->next->prev =  temp;
        free(del);
    }
    return main;
}


Node *deleteAtLast(struct Node *main)
{
    if (main == NULL)
    {
        cout << "List is empty" << endl;
        return main;
    }
    else
    {
        Node *temp = main;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
    }
    return main;
}

int main()
{
    Node *start = NULL;

    // start = insertAtStart(start);
    // start = insertAtStart(start);
    // start = insertAtStart(start);

    start = insertAtLast(start);
    start = insertAtLast(start);
    start = insertAtLast(start);
    start = deleteAtAfter(start);
    start = insertAtLast(start);
    start = insertAtLast(start);
    

    // start = deleteAtFirst(start);
    // start = deleteAtLast(start);

    LinkedListTraversal(start);
    ReverseListTraversal(start);
}
