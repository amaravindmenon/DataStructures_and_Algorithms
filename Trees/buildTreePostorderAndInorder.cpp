#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

struct Node *createNode(int val)
{
    struct Node *newNode = new Node(val);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

Node *buildTree(int postorder[], int inorder[], int start, int end)
{
    static int idx = end;

    if (start > end)
        return NULL;

    int val = postorder[idx];
    idx--;

    struct Node *node = createNode(val);

    if (start == end)
    {
        return node;
    }

    int pos = search(inorder, start, end, val);

    node->right = buildTree(postorder, inorder, pos + 1, end);
    node->left = buildTree(postorder, inorder, start, pos - 1);

    return node;
}

void inorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main()
{
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};
    struct Node *root = buildTree(postorder, inorder, 0, 4);
    inorderTraversal(root);
}
