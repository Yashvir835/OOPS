#include<iostream>
using namespace std;
int count = 0;
class Test{
  public:
  Test(){
    count++;
    cout<<"Constructor is called "<<count<<" times"<<endl;
  }
  ~Test(){
    cout<<"Destructor is called "<<count--<<" times"<<endl;
  }
};
int main(){
  Test t1,t2,t3,t4;
  return 0;
}