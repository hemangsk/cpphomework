#include <iostream>
#include <conio.h>
using namespace std;

int area(int s){
  return (s*s);
}
int area(int l, int b){
  return (l*b);
}
int main() {
  /* code */
  int side, length, breadth;
  cout<<"\nArea of Square , Enter side";
  cin>>side;
  cout<<"Answer="<< area(side);
  cout<<"\nArea of Rectangle, Enter length and breadth";
  cin>>length>>breadth;
  cout<<"Answer = "<<area(length, breadth);
  getch();
  return 0;

}
