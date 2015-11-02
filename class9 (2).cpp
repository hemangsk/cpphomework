#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Temp{
  private:
    char x[10];

  public:
    Temp(){
      cout<<"\nEnter value";
      cin>>x;
    }

    Temp(Temp& t){
      cout<<"\nCopy Constructor";
      strcpy(x,t.x);

      }

    ~Temp(){
      cout<<"\nDestructor Activated!";
    }

    void showData(){
      cout<<"\nValue = "<<x;
    }
};

int main() {
  /* code */

  Temp T;
  Temp T3(T);
  T3.showData();

  getch();
}
