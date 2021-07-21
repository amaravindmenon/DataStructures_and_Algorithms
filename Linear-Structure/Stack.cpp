#include <iostream>

using namespace std;

const int max_size = 0;

struct Stack
{
    int size;
    int top;
    int *arr;
};

Stack *createStack()
{
    Stack *newstack = (Stack *)malloc(sizeof(Stack));
    newstack->arr = (int *)malloc(max_size * sizeof(int));
    newstack->top = -1;
    newstack->size = max_size;
    return newstack;
}

int isEmpty(struct Stack *st){
    if(st->size == -1){
        return 1;
    }
    return -1;
}

int isFull(struct Stack *st){
    if(st->top == max_size-1){
        return 1;
    }
    return -1;
}


void displayStack(struct Stack *st)
{
    if (isEmpty(st))
    {
        cout << "Stack is empty" << endl;
        return;
    }
    for (int i = 0; i <= st->top; i++)
    {
        cout << st->arr[i] << " ";
    }
    cout << endl;
}

void push(struct Stack *st)
{
    if (isFull(st))
    {
        cout << "Stack is full" << endl;
        return;
    }
    else
    {
        int a;
        cout << "enter the value" << endl;
        cin >> a;
        st->top++;
        st->arr[st->top] = a;
        cout << "inserted" << endl;
    }
}

void pop(struct Stack *st)
{
    if (isEmpty(st))
    {
        cout << "Stack is empty" << endl;
        return;
    }
    int a = st->arr[st->top];
    st->top--;
    cout << "Pop element is: " << a;
}

void peek(struct Stack *st)
{
    if (isEmpty(st))
    {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << st->arr[st->top] << endl;
}

int main()
{
    struct Stack *st = createStack();
    // push(st);
    // push(st);
    // displayStack(st);
    // peek(st);
    // pop(st);
}
