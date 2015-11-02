#include <iostream>
#include <conio.h>
using namespace std;

class CAccount{
private:
  int accountNumber;
  float accountBalance;
public:
  CAccount(){
    cout<<"Input the values of \nAccount Number";
    cin>>accountNumber;
    cout<<"\nAccount Balance ?\n";
    cin>>accountBalance;
  }

  void inputTransaction(){
    char transactionType;
    float transactionAmount;

    cout<<"Transaction Type ?\n";
    cin>>transactionType;
    cout<<"Transaction Amount ?\n";
    cin>>transactionAmount;
    if(transactionType=='D'){
      accountBalance+=transactionAmount;

    }
    else{
      accountBalance-=transactionAmount;
    }
  }

  void printBalance(){
    cout<<"\nAccount Number = "<<accountNumber;
    cout<<"\nAccount Balance = "<<accountBalance;

  }
};
 int main() {
  /* code */
  CAccount A;
  A.printBalance();
  A.inputTransaction();
  A.printBalance();

  getch();
  return 0;
}
