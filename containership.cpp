#include <iostream>
#include <conio.h>
using namespace std;

template <class Type>
class Stack
{
private:
Type st[100];
int top;
public:
Stack()
{ top = -1; }
void push(Type var)
{ st[++top] = var; }
Type pop()
{ return st[top--]; }
};

int main()
{
Stack<float> s1;
s1.push(2222.2);
s1.push(3333.3);
cout << "1: "<< s1.pop() << endl;
cout << "2: " << s1.pop() << endl;

Stack<int> s2;
s2.push(45);
s2.push(2);
cout << "1: " << s2.pop() << endl;
cout << "2: " << s2.pop() << endl;
getch();
return 0;
}
