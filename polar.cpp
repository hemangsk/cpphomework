#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void polartorect()
{ float r, theta;
  cout<<"Enter r = ";
  cin>>r;
  cout<<"Enter theta = ";
  cin>>theta;
  cout<<"Rectangular Coordinates are , x = "<<r*sin(theta)<<"and y = "<<r*cos(theta);

}

void recttopolar()
{ float x,y;
  cout<<"Enter x = ";
  cin>>x;
  cout<<"Enter y = ";
  cin>>y;
  cout<<"Polar Coordinates are , r = "<<sqrt(x*x +y*y)<<"and theta = "<<atan(y/x);

}


int main() {
  int option;
  cout<<"Choose Option; \n1. Polar to Rectangular Coordinates \n2. Rectangular to Polar Coordinates";
  cin>>option;
  switch (option) {
    case 1: polartorect(); break;
    case 2: recttopolar(); break;
    default: break;
  }
  getch();
  return 0;
}
