#include <iostream>
#include <conio.h>
using namespace std;

int manipulator(char* lenString){
  int count=0;
  for(int i=0;lenString[i]!='\0';i++){
    count++;
  }
  return count;
}
int main() {
  /* code */
  char lenString[30];
  cout<<"Welcome to Manipulator Program - Enter String";
  cin>>lenString;
  cout<<"Length of string Calcualted using self-made manipulator = "<<manipulator(lenString);
  getch();
  return 0;
}
