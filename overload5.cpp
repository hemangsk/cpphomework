#include <iostream>
#include <conio.h>
#include <malloc.h>

using namespace std;
// replacement of a minimal set of functions:
const int size=10;
class Data{
  int data;
public:
  Data operator +=(Data &s);
  Data operator=(Data &s);
  Data(){
    cout<<"Enter the data";
    cin>>data;
  }

  void show(){

    cout<<data;
    cout<<endl;
  }
};
Data Data::operator+=(Data &s){
  data=data+s.data;
  return *this;
}
Data Data::operator=(Data &s){
  data=s.data;
  return *this;
}
int main() {
     Data s1;
     Data s2;
     s1.show();
     s2.show();
     s1+=s2;
     s1.show();
     s1+=s2;
     s1.show();

     getch();
}
