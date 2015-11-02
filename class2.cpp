#include <iostream>
#include <conio.h>
using namespace std;

class Window{
private:
    char shape[10];
public:
    int countWindow;
    void addWindow(){
      countWindow++;
      cout<<"Count Window = "<<countWindow;
    }
};

class Door{
private:
    char woodQuality[10];
public:
    int countDoor;
    void addDoor(){
      countDoor++;
      cout<<"Count Door = "<<countDoor;
    }

};


class House:public Window, public Door{
private:
  int roomCount;
public:
  House(){
    roomCount=0;
    countDoor=0;
    countWindow=0;
  }
  void addRoom(){
    House H;
    roomCount++;
    cout<<"Room Count = "<<roomCount;
    H.addDoor();
    H.addWindow();
    cout<<"Room Added!";

  }

};
int main() {
  /* code */

  House H;
  H.addRoom();
  getch();
  return 0;
}
