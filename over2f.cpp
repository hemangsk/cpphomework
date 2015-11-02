#include <iostream>
#include <conio.h>
#include <malloc.h>
using namespace std;
// replacement of a minimal set of functions:

class Over{
  int data;
public:
  friend Over operator ++(Over &o);
  friend Over operator --(Over &o);
  void show(){
    cout<<"\nValue of Variable = "<<data<<endl;
  }

  Over(int dat){
    data=dat;
  }

};
Over operator --(Over &o) {
    o.data--;
    return o;
}
Over operator ++(Over &o) //noexcept
{   o.data++;
    return o;
}
int main() {
     Over o1(2), o2(6);
     ++o1;
     --o2;
     o1.show();
     o2.show();
     getch();
}
