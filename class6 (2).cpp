#include <iostream>
#include <conio.h>
using namespace std;

class Temp{
  private:
    int x;
    char *s;
  public:
    Temp(){

    }
    Temp(int d, char* p){
      cout<<"Default Constructor";
      x=d;
      s=p;
    }
    Temp& operator = (Temp& t){
        cout<<"Copy Assignment Operator Activated!";
        x=t.x;
        s=t.s;
        return *this;
    }

    Temp(Temp& t){
      cout<<"Copy Constructor";
      x=t.x;
      s=t.s;
  }
};

int main() {
  /* code */
  char ch;
  Temp T(2,&ch);
  Temp T2;
  T2=T;
  Temp T3(T2);
  getch();
}
