#include <iostream>
#include <conio.h>
using namespace std;

const int MAX_SIZE = 100;

class StackOverFlowException
{
    public:
        StackOverFlowException()
        {
            cout << "Stack overflow" << endl;
        }
};

class StackUnderFlowException
{
    public:
        StackUnderFlowException()
        {
            cout << "Stack underflow" << endl;
        }
};

class ArrayStack
{
    private:
        int data[MAX_SIZE];
        int top;
  public:
      ArrayStack()
      {
          top = -1;
    }

    void Push(int element)
    {
        if ( top >= MAX_SIZE )
            {
                throw new StackOverFlowException();
            }
            data[++top] = element;
    }

    int Pop()
    {
        if ( top == -1 )
            {
                throw new StackUnderFlowException();
            }
            return data[top--];
    }

    int Top()
    {
        return data[top];
    }

    int Size()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        return ( top == -1 ) ? true : false;
    }
};

int main()
{
    ArrayStack s;
    try {
        if ( s.isEmpty() )
            {
            cout << "Stack is empty" << endl;
            }
        // Push elements
        s.Push(100);
        s.Push(200);
        // Size of stack
        cout << "Size of stack = " << s.Size() << endl;
        // Top element
        cout << s.Top() << endl;
        // Pop element
        cout << s.Pop() << endl;
        // Pop element
        cout << s.Pop() << endl;
        // Pop element
        cout << s.Pop() << endl;
    }
    catch (...) {
        cout << "Some exception occured" << endl;
    }
    getch();
}
