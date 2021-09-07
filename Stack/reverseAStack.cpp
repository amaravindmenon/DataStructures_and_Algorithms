#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &st, int ele)
{
    if (st.empty())
    {
        st.push(ele);
        return;
    }

    int topele = st.top();
    st.pop();
    insertAtBottom(st, ele);
    st.push(topele);
}

void reverseAStack(stack<int> &st)
{
    if (st.empty())
        return;

    int ele = st.top();

    st.pop();
    reverseAStack(st);
    insertAtBottom(st, ele);
}

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    reverseAStack(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
