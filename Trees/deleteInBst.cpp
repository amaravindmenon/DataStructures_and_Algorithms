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


void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

struct Node *inOrderPredecessor(struct Node *root){
    root = root->left;
    while (root->right != NULL){
        root = root->right;
    }
    return root;
}

struct Node *deleteNode(struct Node *root, int key)
{
    struct Node *ipre;
    if(root == NULL) return NULL;

    if(root->left == NULL && root->right == NULL) {
        free(root);
        return NULL;
    }

    if(key < root->data){
        root->left = deleteNode(root->left,key);
    }else if(key > root->data){
       root->right =  deleteNode(root->right,key);
    }else{
        // when node found
        ipre = inOrderPredecessor(root);
        root->data = ipre->data;
        root->left =  deleteNode(root->left,ipre->data);
    }
    return root;
}

int main()
{
    struct Node *root = createNode(5);

    // linking
    root->left = createNode(3);
    root->right = createNode(6);
    root->left->left = createNode(1);
    root->left->right = createNode(4);
    deleteNode(root, 4);
    inorder(root);
    return 0;
}
