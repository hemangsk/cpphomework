#include <iostream>
#include <conio.h>
using namespace std;

class Student{
public:
    int enrollNumber;
};

class Worker{
public:
    int socialNumber;
};

class Person:public Student, public Worker{
private:
    char name[20];
    int age;
};

int main() {
  /* code */
  Person P;
  P.socialNumber=90;
  cout<<P.socialNumber;
  getch();
  return 0;
}
