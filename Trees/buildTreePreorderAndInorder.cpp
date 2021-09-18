#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


struct Node* createNode(int val){
    struct Node* newNode = new Node(val);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


int search(int inorder[],int start,int end,int curr){
    for (int i = start; i <=end; i++)
    {
        if(inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preorder[],int inorder[],int start,int end){
    static int idx = 0;

    if(start > end) return NULL;

    int curr = preorder[idx];
    idx++;

    struct Node* node = createNode(curr);

    if(start == end){
        return node;
    }

    int pos = search(inorder,start,end,curr);

    node->left = buildTree(preorder,inorder,start,pos-1);
    node->right = buildTree(preorder,inorder,pos+1,end);

    return node;
}


void inorderTraversal(struct Node* root){
    if(root != NULL){
        inorderTraversal(root->left);
        cout<< root->data << " ";
        inorderTraversal(root->right);
    }
}

int main(){ 
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};
    struct Node* root = buildTree(preorder,inorder,0,4);
    inorderTraversal(root);
}



