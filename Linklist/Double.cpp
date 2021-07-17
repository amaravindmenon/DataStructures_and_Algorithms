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


