#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;
////////////////////////////////////////////////////////////////
class Distance //English Distance class
{
private:
  int feet;
  float inches;
public:
  Distance() : feet(0), inches(0.0) //constructor (no args)
  { } //constructor (two args)
  Distance(int ft, float in) : feet(ft), inches(in)
  { }

  friend istream& operator >> (istream& s, Distance& d);
  friend ostream& operator << (ostream& s, Distance& d);
};
//--------------------------------------------------------------
istream& operator >> (istream& s, Distance& d) //get Distance
{
  char dummy;
  s >> d.feet>>dummy>>d.inches;
  return s; //overloaded
} //>> operator
//--------------------------------------------------------------
ostream& operator << (ostream& s, Distance& d) //send Distance
{ //to file or
  s << d.feet <<" "<< d.inches; //screen with
  return s; //overloaded
} //<< operator
////////////////////////////////////////////////////////////////
int main()
{
  char ch;
  Distance dist1;
  ofstream file; //create and open
  file.open("DIST.TXT"); //output stream
  do {
  cout << "\nEnter Distance: ";
  cin >> dist1; //get distance from user
  file << dist1; //write it to output str
  cout << "Do another (y/n)? ";
  cin >> ch;
  } while(ch != 'n');
  file.close(); //close output stream

  ifstream ifile; //create and open
  ifile.open("DIST.TXT"); //input stream
  cout << "\nContents of disk file is:\n";
  while(true)
  {
  ifile >> dist1; //read dist from stream
  if(ifile.eof()) //quit on EOF
  break;
  cout << "Distance = " << dist1 <<endl; //display distance
  }
  ifile.close();
  getch();
  return 0;

}
