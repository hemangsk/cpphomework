#include <iostream>
#include <conio.h>
using namespace std;

class Contact{
  private:
    long int phoneNumber[100];
    static int count;
  public:
    void addContact(){

      if(count<100){
        cout<<"\nEnter phone number = ";
        cin>>phoneNumber[count];
        cout<<"\nPhone Number Saved!\n";
        count++;
      }

      else{
        cout<<"Memory Full!";
      }
    }

    void showData(){
      for(int i=0;i<count;i++){
        cout<<"Number "<<i+1<<" = "<<phoneNumber[i];
      }
    }
    static void counter(){
        cout<<"Count is now"<<count;
    }



};

int Contact::count=0;

int main() {
  /* code */
  int choice=1,option;
  Contact C;
  while(choice==1){
      cout<<"\n1. Add a Contact?\n2. Show Contact\n3. Quit\n";
      cin>>option;
      switch (option) {
        case 1:C.addContact(); break;
        case 2:C.showData(); break;
        case 3: choice=0; break;
        default: cout<<"Wrong Option Entered"; break;
      }
  }
  getch();
}
