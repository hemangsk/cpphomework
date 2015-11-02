#include <iostream>
#include <conio.h>
using namespace std;

class Car{
  private:
    static float money;
    static int count;
  public:
    Car(){
      money=0;
      count=0;
    }
    void addCar(){
      count++;
      }

    void tollCollect(){
      money+=20;
    }
    static void counter(){
        cout<<"\n Car Count is now"<<count;
    }

    void showData(){
      cout<<"\nData =\n"<<count<<"\n"<<money;
    }


};

int Car::count=0;
float Car::money=0;

int main() {
  /* code */
  Car C;
  C.tollCollect();
  C.tollCollect();
  C.addCar(); //Car just escaped!!
  C.tollCollect();
  C.showData();

  getch();
}
