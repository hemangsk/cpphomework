#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
class Employee{
private:
  int empId;
  int empSal;
  int empCode;
public:
  int getData(){
    return empId;
  }
  friend ostream& operator <<(ostream &o, Employee &E);
  friend istream& operator >>(istream &i, Employee &E);


};
Employee e;
ostream& operator <<(ostream &o, Employee &E){

   o<<E.empId<<endl<<E.empSal<<endl<<E.empCode<<endl;
   return o;
 }

 istream& operator >>(istream &i, Employee &E){

   i>>E.empId>>E.empSal>>E.empCode;
   return i;
 }
void addEmp(){

  ofstream file;
  file.open("employee.TXT");
  cout<<"Enter details = ";
  cin>>e;
  cout<<"Details added!";
 file.close();
}
void showEmp(){

  ifstream file;
  file.open("employee.TXT");
  cout<<"Details = ";

  while(!file.eof())
  {
    file>>e;
    cout << "Employee = " << e <<endl;
  }

  file.close();
}



void editEmp(int id){

  fstream file;
  file.open("employee.TXT");
  cout<<"Details = ";

  while(!file.eof())
  {
    file >>e; //read dist from stream
    if(e.getData()==id){
    file.seekp(-1*sizeof(e), ios::cur);
    cout<<"Enter new record";
    cin>>e;
    cout<<"Record Updated!";
  }
  }

  file.close();
}

int main() {
  /* code */
  int choice=1, option, data;
  while(choice==1){
    cout<<"\n1. Add New Employee \n2. Edit Employee \n3. Show Data \n4. Exit";
    cin>>option;
    switch (option) {
      case 1: addEmp();break;
      case 2: cout<<"Enter Employee ID to be edited : "; cin>>data; editEmp(data);break;
      case 3: showEmp(); break;
      case 4: choice=0; break;
      default: break;
    }
  }
  getch();
  return 0;
}
