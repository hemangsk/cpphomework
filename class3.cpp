#include <iostream>
#include <conio.h>
using namespace std;

class Performance{
private:
    char grade;
public:
    int totalScore;
    void addScore(){
      totalScore++;
      cout<<"Score = "<<totalScore;
    }
};

class Sports: virtual public Performance{
private:
    char sportName[10];
public:
    int countPlayer;
    void addPlayer(){
      countPlayer++;
      cout<<"Count Player = "<<countPlayer;
    }

};
class Test: virtual public Performance{
private:
    char enduranceTest[10];
public:
    int accScore;
    void addScoreEndurance(){
      accScore++;
      cout<<"Count Endurance Score = "<<accScore;
    }

};


class Student:public Test, public Sports{
private:
  int studCount;
public:
    Student(){
    studCount=0;
    accScore=0;
    countPlayer=0;
    totalScore=0;
  }
  void addStud(){
    Student H;
    studCount++;
    cout<<"Student Count = "<<studCount;
    H.addScore();
    H.addPlayer();
    H.addScoreEndurance();
    cout<<"Player Added!";

  }

};
int main() {
  /* code */

  Student H;
  H.addStud();
  getch();
  return 0;
}
