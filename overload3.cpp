#include <iostream>
#include <conio.h>
#include <malloc.h>
using namespace std;
// replacement of a minimal set of functions:

class Over{
  int data;
public:

  Over operator -(Over &o);
  void show(){
    cout<<"\nValue of Variable = "<<data<<endl;
  }

  Over(int dat){
    data=dat;
  }

  Over(){

  }
};
Over Over:: operator -(Over &o) {
    Over o1;
    o1.data=data-o.data;
    return o1;
}

int main() {
     Over o1(2), o2(6);
     Over o3(0);
     o3=o2-o1;
     o1.show();
     o2.show();
     o3.show();
     getch();
}
