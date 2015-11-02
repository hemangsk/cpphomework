#include <iostream>
#include <conio.h>
using namespace std;

class Counter{
  private:
    static int count;

  public:
    Counter(){
      count++;
    }

    static void display(){
        cout<<"\nCount is : "<<count;
    }

};

int Counter::count=0;

int main() {
  /* code */
  cout<<"\nCreating first Object!\n";
  Counter C;
  Counter::display();
  cout<<"\nCreating second Object!\n";
  Counter C2;
  Counter::display();
  cout<<"\nCreating third Object!\n";
  Counter C3;
  Counter::display();
  getch();
  return 0;
}
