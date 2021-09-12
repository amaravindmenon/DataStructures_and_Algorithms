#include <iostream>
#include <stack>

using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void Push(int x)
    {
        s1.push(x);
    }

    int Pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is full" << endl;
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval = s2.top();
        return topval;
    }

    bool Empty()
    {
        if (s1.empty() && s2.empty())
            return true;
        return false;
    }
};

int main()
{
    Queue que;
    que.Push(10);  
    que.Push(20);  
    que.Push(30);  
    que.Push(40);  
    que.Pop();
    cout<<que.Empty()<<endl;
}
