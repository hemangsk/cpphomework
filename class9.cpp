#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;

class Student
{
private:
  char name[20];
  int roll;
public:
  Student()
  { roll=0;
    name[0]='\0';
  }
  Student(char* names, int rollno)
  {
    for(int i=0;names[i]!='\0';i++){
      name[i]=names[i];

    }
    roll=rollno;
  }

  friend istream& operator >> (istream& s, Student& d);
  friend ostream& operator << (ostream& s, Student& d);
};

istream& operator >> (istream& s, Student& d)
{
  char dummy;
  s >> d.name>>d.roll;
  return s; //overloaded
} //>> operator
//--------------------------------------------------------------
ostream& operator << (ostream& s, Student& d) //send Student
{ //to file or
  s << d.name <<" "<< d.roll; //screen with
  return s; //overloaded
} //<< operator
////////////////////////////////////////////////////////////////
int main()
{
  char ch;
  Student dist1;
  ofstream file; //create and open
  file.open("STUD.TXT"); //output stream
  do {
  cout << "\nEnter Student: ";
  cin >> dist1; //get Studentfrom user
  file << dist1; //write it to output str
  cout << "Do another (y/n)? ";
  cin >> ch;
  } while(ch != 'n');
  file.close(); //close output stream

  ifstream ifile; //create and open
  ifile.open("STUD.TXT"); //input stream
  cout << "\nContents of disk file is:\n";

  while(true)
  {
    if(ifile.eof()) //quit on EOF
    break;
  ifile >> dist1; //read dist from stream
  cout << "Student= " << dist1 <<endl; //display Student
  }
  ifile.close();
  getch();
  return 0;

}
