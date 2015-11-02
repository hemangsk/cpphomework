#include <iostream>
#include <conio.h>
using namespace std;

class Employee{
  private:
    char name[10];
    char address[20];
    int age;

  public:
      void getData(){
        cout<<"Enter \nName\nAddress\nAge";
        cin>>name>>address>>age;

    }

    void showData(){
      cout<<"\nName"<<name<<"\nAddress\n"<<address<<"\nAge\n"<<age;

  }

};

int main() {
  /* code */
  Employee E1;
  E1.getData();
  E1.showData();
  getch();
  return 0;
}
