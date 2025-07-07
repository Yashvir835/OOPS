#include<iostream>
using namespace std;
class Base{
 public:
 virtual void show (int x = 7){
  cout<<"Base::show() is called and value of x is "<<x<<endl;
 }
};
class Derived:public Base{
  public:
  void show(int x){
    cout<<"Derived::show() is called and value of x is "<<x<<endl;
  }
};
int main(){
Base * ptr;
Derived b;
ptr = &b;
// ptr->show();
return 0;
}


