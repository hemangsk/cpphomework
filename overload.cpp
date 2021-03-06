#include <iostream>
#include <conio.h>
#include <malloc.h>
using namespace std;
// replacement of a minimal set of functions:

class Over{
  int data;
public:
  void* operator new(size_t sz);
  void operator delete(void* ptr);
  void show(){
    cout<<"\nValue of Variable = "<<data<<endl;
  }

  Over(int dat){
    data=dat;
  }

};
void* Over:: operator new(size_t sz) {
    cout<<"\nOperator new Called! | Size ="<<sz<<endl;

    return malloc(sz);
}
void Over:: operator delete(void* ptr) //noexcept
{
    cout<<"\nOperator delete Called!\n";
    free(ptr);
}
int main() {
     Over *o1, *o2;
     o1= new Over(90);
     o2= new Over(70);
     o1->show();
     o2->show();
     delete o1;
     delete o2;

    getch();
}
