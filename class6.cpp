#include <iostream>
#include <conio.h>
using namespace std;

class Shape //base class
{
public:
virtual void show() //virtual function
{ cout << "Base\n"; }
};

class Rectangle : public Shape //derived class 1
{

public:
void show()
{ cout << "Rectangle\n"; }
};

class Circle : public Shape //derived class 2
{
public:
void show()
{ cout << "Circle\n"; }
};

class Triangle : public Shape //derived class 2
{
public:
void show()
{ cout << "Triangle\n"; }
};

int main()
{
Rectangle dv1; //object of derived class 1
Circle dv2; //object of derived class 2
Shape* ptr; //pointer to base class
ptr = &dv1; //put address of dv1 in pointer
ptr->show(); //execute show()
ptr = &dv2; //put address of dv2 in pointer
ptr->show(); //execute show()
getch();
return 0;
}
