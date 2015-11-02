#include <iostream>
#include <conio.h>
using namespace std;

class Integer{
public:
  class Check{

  };

  void input(int data){
    if(data==0){
      throw Check();
    }
  }


};
int main() {
  /* code */
  Integer I;
  int choice=1,num;
  while (choice!=0) {
    try{
      cout<<"\nEnter a number! Not Zero!!\n";
      cin>>num;
      I.input(num);
    }
    catch(Integer::Check){
      cout<<"\nException - Don't enter Zero!\n";
    }
    /* code */
    cout<<"\nContinue? Press 0 to end and any other number to Continue - \n";
    cin>>choice;
  }
  getch();
  return 0;
}
