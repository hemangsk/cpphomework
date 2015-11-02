#include <iostream>
#include <conio.h>
using namespace std;

struct user{
  char name[10];
  float accountBalance;
  float interestRate;
}u;


void openAccount(){
  cout<<"\nWelcome to Account Opening Department";
  cout<<"\nEnter name!  ";
  cin>>u.name;
  cout<<"\nEnter Account Balance  ";
  cin>>u.accountBalance;
  cout<<"\nEnter Interest Rate  ";
  cin>>u.interestRate;
  cout<<"\nAccount Opened!";
}

void generateStatement(){
  cout<<"\nSTATEMENT";
  cout<<"\nName"<<u.name<<"\nAccount Balance"<<u.accountBalance;
}

void deposit(){
  float deposit;
  cout<<"\nEnter the amount to be deposited\n";
  cin>>deposit;
  u.accountBalance+=deposit;
  cout<<"\nDeposited";
  generateStatement();
}

void withdraw(){
  float withdraw;
  cout<<"\nEnter the amount to be withdrawn\n";
  cin>>withdraw;
  if((u.accountBalance-withdraw)>0)
  {
    u.accountBalance-=withdraw;
    cout<<"\nWithdrawn";
  }

  else{
    cout<<"\nInsufficient Balance!";
  }

  generateStatement();
}

void financialPlanning(){
  int presentYear, retirementYear;
  int expectedAmount;
  cout<<"\nEnter Present Year\n";
  cin>>presentYear;
  cout<<"\nEnter Retirement Year\n";
  cin>>retirementYear;
  cout<<"\nProjected Amount = ";
  cout<<(retirementYear-presentYear)*u.interestRate<<" Rs\n";
}
int main() {
  /* code */
  int option=0, choice=1;
  while (choice==1 || option==5) {
    /* code */
    cout<<"\nChoose the Option Number :-";
    cout<<"\n1. Open Account "<<"\n2. Deposit"<<"\n3. Withdraw "<<"\n4. Financial Planning"<<"\n5. Exit\n";
    cin>>option;

    switch (option) {
      case 1: openAccount(); break;
      case 2: deposit(); break;
      case 3: withdraw(); break;
      case 4: financialPlanning(); break;
      case 5: cout<<"\nExiting!!\n"; choice=0; break;
      default:cout<<"\nWrong Option!\n \n Exiting!!\n\n"; break;
    }
  }
}
