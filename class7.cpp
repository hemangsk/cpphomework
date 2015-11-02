#include <iostream>
#include <conio.h>
using namespace std;

class Vehicle //base class
{
private:
  int reg_no;
  int cost;
public:
  virtual void start()=0;
  virtual void stop()=0;
  virtual void show(){
    cout << "Base - Vehicle\n";
  }
};

class HeavyVehicles : public Vehicle //derived class 1
{
  int heavyVehicleCount;
public:
  HeavyVehicles(){
    heavyVehicleCount=0;
  }
  void start(){
      heavyVehicleCount++;
  }
  void stop(){
      heavyVehicleCount--;
  }
  void show()
  {
      cout << "Heavy Vehicle\n";
  }
};

class LightVehicles : public Vehicle //derived class 2
{
  int lightVehicleCount;
public:
  LightVehicles(){
    lightVehicleCount=0;
  }
  void start(){
      lightVehicleCount++;
  }
  void stop(){
      lightVehicleCount--;
  }
  void show()
  {
      cout<<"Light Vehicle\n";
  }
};


int main()
{
HeavyVehicles dv1; //object of derived class 1
LightVehicles dv2; //object of derived class 2
Vehicle* ptr; //pointer to base class
ptr = &dv1; //put address of dv1 in pointer
ptr->show(); //execute show()
ptr = &dv2; //put address of dv2 in pointer
ptr->show(); //execute show()
getch();
return 0;
}
