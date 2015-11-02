#include <iostream>
#include <exception>
using namespace std;

class Base {virtual void member(){}};
class Derived : Base {};

/*Bad Alloc*/

int badAlloc() {
  try
  {
    int* myarray= new int[10000];
  }
  catch (bad_alloc& ba)
  {
    cout<<"bad_alloc caught: "<< ba.what()<< '\n';
  }
  return 0;
}


/*Bad Cast*/
int badCast() {
  try
  {
    Base b;
    Derived& rd = dynamic_cast<Derived&>(b);
  }
  catch (bad_cast& bc)
  {
     cout<<"bad_cast caught: "<< bc.what()<<'\n';
  }
  return 0;
}
/*Unexpected_Exception_Handler */
void myunexpected () {
  cout<< "unexpected handler called\n";
  throw;
}

void myfunction () throw (int,std::bad_exception) {
  throw 'x'; // throws char (not in exception-specification)
}

int unexpectedHandler (void) {
  set_unexpected (myunexpected);
  try {
    myfunction();
  }
  catch (int) { std::cerr << "caught int\n"; }
  catch (std::bad_exception be) { cout<< "caught bad_exception\n"; }
  catch (...) { cout<< "caught some other exception\n"; }
  return 0;
}

int badFnCall () {
  std::function<int(int,int)> foo = std::plus<int>();
  std::function<int(int,int)> bar;

  try {
    std::cout << foo(10,20) << '\n';
    std::cout << bar(10,20) << '\n';
  }
  catch (std::bad_function_call& e)
  {
    std::cout << "ERROR: Bad function call\n";
  }

  return 0;
}
