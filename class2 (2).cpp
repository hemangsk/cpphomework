#include <iostream>
#include <conio.h>
using namespace std;

class CCourse{
  private:
    int year;
    char sem[3];
    char courseNumber[6];
    char sectionNumber[3];
    char building;
    char room;
    float beginTime;
    float endTime;
    char meetingDays;

  public:
    CCourse(){
      cout<<"Enter Course Details\n";
      cout<<"1. Year\n";
      cout<<"2. Sem\n";
      cout<<"3. Course Number\n";
      cout<<"4. Section Number \n";
      cout<<"5. Building \n";
      cout<<"6. Room\n";
      cout<<"7. Meeting Days\n";

      cin>>year>>sem>>courseNumber>>sectionNumber>>building>>room>>meetingDays;

    }

    void getBeginTime(int day){

      if(day==1 || day==3){
        beginTime=1.00;
      }
      else {
        beginTime=1.30;
      }
    }

    void getEndTime(int day){
      if(day==1 or day==3){
        endTime=3.00;
      }
      else{
        endTime=3.30;
      }
    }

    void showDetails(){
      cout<<"Year\n"<<year<<"\nSem\n"<<sem<<"\nCourse Number\n"<<courseNumber<<"\nSection Number\n"<<sectionNumber<<"\nBuilding\n"<<building<<"\nRoom\n"<<room<<"\nMeeting\n"<<meetingDays;
      cout<<"\nBegin Time "<<beginTime;
      cout<<"\nEnd Time "<<endTime;
    }


};

int main() {
  /* code */
  CCourse C1;
  C1.getBeginTime(1);
  C1.getEndTime(4);
  C1.showDetails();
  getch();
  return 0;
}
