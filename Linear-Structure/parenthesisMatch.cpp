#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

const int max_size = 50;

struct Stack
{
    int size;
    int top;
    char *arr;
};

Stack *createStack()
{
    Stack *newstack = (Stack *)malloc(sizeof(Stack));
    newstack->arr = (char *)malloc(max_size * sizeof(char));
    newstack->top = -1;
    newstack->size = max_size;
    return newstack;
}

int isEmpty(struct Stack *st)
{
    if (st->size == -1)
    {
        return 1;
    }
    return -1;
}

int isFull(struct Stack *st)
{
    if (st->top == max_size - 1)
    {
        return 1;
    }
    return -1;
}

void push(struct Stack *st, char p)
{
    if (isFull(st))
    {
        cout << "Stack is full" << endl;
        return;
    }
    else
    {
        st->top++;
        st->arr[st->top] = p;
    }
}

char pop(struct Stack *st)
{
    if (isEmpty(st))
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    char a = st->arr[st->top];
    st->top--;
    return a;
}

bool parenthesisMatch(char * exp)
{
    struct Stack *st = createStack();
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(st, exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(st))
            {
                return false;
            }
            pop(st);
        }
    }
    if (isEmpty(st))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char * exp = "[4-6]((8){(9-8)})";
    if (parenthesisMatch(exp))
    {
        cout << "match" << endl;
    }
    else
    {
        cout << "Not match" << endl;
    }
}
