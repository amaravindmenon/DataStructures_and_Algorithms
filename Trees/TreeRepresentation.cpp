#include<iostream>
#include<conio.h>

using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};


struct Node * createNode(){
    int data;
    cout << "Enter the data"<<endl;
    cin>>data;
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}


int main(){
    struct Node *root = createNode();
    
    // linking
    root->left = createNode();
    root->right = createNode();

}


