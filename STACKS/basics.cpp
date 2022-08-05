#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack()
    {
        arr = new int[size];
        top = -1;
    }

    void push(int x)
    {

        if (top == size - 1)
        {
            cout << "Stack overflow " << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow " << endl;
            return;
        }

        top--;
    }

    int peak()
    {
        if (top == -1)
        {
            cout << "No element in stack " << endl;
            return -1;
        }
        return arr[top];
    }

    void isEmpty()
    {
        if (top==-1)
        {
            cout<< "Stack is empty "<<endl;
        }
        else
        {
            cout << "Stack is not empty "<< endl;
        }
        
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    cout << "Top element is "<<s.peak()<< endl;
    s.pop();
    s.pop();
    cout << "Top element is "<<s.peak()<< endl;
    s.isEmpty();

    return 0;
}