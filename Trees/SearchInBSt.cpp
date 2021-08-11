#include <iostream>
#include <conio.h>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Recursive Search
int searchInBst(struct Node *root, int key)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->data == key)
    {
        return 1;
    }
    else if (root->data > key)
    {
        return searchInBst(root->left, key);
    }
    else
    {
        return searchInBst(root->right, key);
    }
}

// Iterative Search
int searchInBstIterative(struct Node *root, int key)
{
    while (root != NULL)
    {

        if (root->data == key)
        {
            return 1;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return 0;
}

int main()
{
    struct Node *root = createNode(5);

    // linking
    root->left = createNode(3);
    root->right = createNode(6);
    root->left->left = createNode(1);
    root->left->right = createNode(10);

    if (searchInBst(root, 10))
    {
        cout << "Yupss!! it's present!" << endl;
    }
    else
    {
        cout << "Ohh not present" << endl;
    }
}
