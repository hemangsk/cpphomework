#include <iostream>
#include <conio.h>
#include <malloc.h>
#include <string.h>
using namespace std;
// replacement of a minimal set of functions:
const int size=10;
class String{
  char data[size];
public:
  friend String operator +(String &a, String &s);
  String(){
    cout<<"Enter the String";
    cin>>data;
  }

  void show(){
    for(int i=0;data[i]!='\0';i++){
      cout<<data[i];
    }
    cout<<endl;
  }
};
String operator+(String &a, String &s){
  strcat(a.data,s.data);
  return a;
}
int main() {
     String s1;
     String s2;
     s1.show();
     s2.show();
     s1=s1+s2;
     s1.show();

     getch();
}
