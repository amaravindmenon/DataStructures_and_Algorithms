#include<iostream>
using namespace std;

#define n 100


class stack{
    int *arr;
    int top;

    public:
        stack(){
            arr = new int[n];
            top = -1;
        }
    void push(int x){
        if(top == n-1){
            cout<<"Stack is full"<<endl;
        }else{
            top++;
            arr[top] = x;
        }
        return;
    }   

    void pop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
        }else{
            top--;
        }
    }

    int Top(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }else{
            return arr[top];
        }
    }

    bool empty(){
        return top == -1;
    }

  
};


int main(){
    stack st;
    st.push(10);
    st.push(20);
    // st.pop();
    cout<<st.Top()<<endl;
}

