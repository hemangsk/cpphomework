#include <iostream>
#include <conio.h>
using namespace std;
template <class Type>
class Vector{
private:
  Type x[2];
public:
  Vector(){

  }
  Vector(Type d){
    for(int i=0;i<2;i++){
      x[i]=d;
    }
  }
  Vector<Type> add(Vector<Type> T, Vector<Type> P){
    Vector<Type> V;
    for (int i=0;i<2;i++){
      V.x[i]=T.x[i]+P.x[i];
      cout<<"\nV3 = \n"<<V.x[i];
    }
    return V;
  }

  void showData(){
    for(int i=0;i<2;i++){
      cout<<"\n Final Results = \n"<<x[i];
    }
  }
};

int main()
  { Vector<float> V1(9);
    Vector<float> V2(10.9);
    Vector<float> V3;
    V3=V3.add(V1,V2);
    V3.showData();
    getch();
    return 0;
}
