#include <iostream>
#include <conio.h>
using namespace std;

inline int add(int a,int b)
{
  return (a+b);

}
int main() {
  /* code */
  cout<<"We are adding 2 and 5 and the answer calculated using Inline () is =  "<<add(2,5);
  getch();
  return 0;
}
