#include<iostream>


using namespace std;


class node{
    public:
        int data;
        node *next;
};

void display(node *head){
    node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NUll"<<endl;
}


void insertAtHead(node *head,int data){
    node *newNode;
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }else{
        node *temp;
        temp->data = data;
        head = temp;
    }
    return;
}

void evenAfterOdd(node* &head){
    node* odd = head;
    node* even = head->next;
    node* evenStart = even;

    while(odd->next && even->next != NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenStart;
    if(odd->next != NULL){
        even->next = NULL;
    }
}

int main(){
    node *head=NULL;
    int arr[] = {1,2,3,4,5,6};
    for(int i=0; i<6; i++){
        insertAtHead(head,arr[i]);
    }

    display(head);
    evenAfterOdd(head);
    display(head);
}



