#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
using namespace std;
const int MAX = 80; //size of buffer
//80 is the length of a line on screen

int main() {
  /* code */

  char buffer1[MAX];
  char buffer2[MAX];
  char ch1;
  char ch2;  //character buffer, its size should be same as MAX, because only one line is to be compared at once
  ifstream infile("DIST.TXT"); //create file for input
  ifstream infile2("DIST2.TXT");
  while(!infile.eof()||!infile2.eof() ) //until end-of-file
  {

    infile.getline(buffer1, MAX);
    infile2.getline(buffer2, MAX);

  if(strcmpi(buffer1,buffer2)!=0){
    cout<<"Difference found !";
    cout<<endl<<"Buffer 1 = "<<buffer1<<endl<<"Buffer 2 = "<<buffer2;
    break;
  }



  }

  getch();
  return 0;
}
