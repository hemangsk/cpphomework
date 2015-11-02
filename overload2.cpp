#include <iostream>
#include <conio.h>
#include <malloc.h>
using namespace std;
// replacement of a minimal set of functions:

class Over{
  int data;
public:
  Over operator ++();
  Over operator --();
  void show(){
    cout<<"\nValue of Variable = "<<data<<endl;
  }

  Over(int dat){
    data=dat;
  }

};
Over Over:: operator --() {
    data--;
    return *this;
}
Over Over:: operator ++() //noexcept
{   data++;
    return *this;
}
int main() {
     Over o1(2), o2(6);
     ++o1;
     --o2;
     o1.show();
     o2.show();
     getch();
}
