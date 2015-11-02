#include <iostream>
#include <conio.h>
using namespace std;
double power(double n, int p){
  double result=1;
  for(int i=0;i<p;i++){
    result=result*n;
  }
  return result;
}
int main() {
  /* code */
  cout<<power(2,9);
  getch();
  return 0;
}
