#include <iostream>

using namespace std;

#define n 3

class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    bool isEmpty()
    {
        if (front == -1 || front > back)
            return true;
        return false;
    }

    bool isFull()
    {
        if (back == n - 1)
            return true;
        return false;
    }

    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Queue is full!" << endl;
            return;
        }
        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
        }
        return;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        front++;
        cout << "1 item deleted!" << endl;

    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Peek value is: " << arr[front] << endl;
    }
};



int main(){
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue();
    q.peek();
    
}

