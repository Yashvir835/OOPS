#include<iostream>
using namespace std;

class A{
  public:
  A(){
    cout<<"This is the default constructor of class A"<<endl;
  }
};
class B : public A{
   public:
   B(){
    cout<<"This is the default contructor of class B which is derived from class A "<<endl;
   }
};

class C{
  public:
  C(){
    cout<<"This is the default contructor of C"<<endl;
  }
};
class D{
  
};

class E{
  A a;
  public:
  E(){
    cout<<"Default constructor of class E which have and object variable of class A"<<endl;
  }
};

class Sum{
  public:
  int sum = 0;
  Sum();
  Sum(int a , int x =0)
  {
    sum = a+x;

  }
  void display(){
    cout<<"The sum is :"<<sum<<endl;
  }
};
int main(){
  cout<<"In the first example i created the class B which is derived from class A and\nwhenever we intialize the object of class B the default contructor of class A first\nthen of class B. If you dont initialize the default contructor of B then aslo default contructor of A is called"<<endl;
  cout<<"---------------------------------------------------------------"<<endl;
  B obj;

  cout<<"----------------------------------------------------------------"<<endl;
  
  cout<<"In this we are making the instance of class C and calling the default construcor of C"<<endl;
  cout<<"----------------------------------------------------------------"<<endl;
  C obj2;
  cout<<"----------------------------------------------------------------"<<endl;
  cout<<"In this we are making the instance of the class D whcih does not have any default construcor"<<endl<<endl;
  D obj3;
  cout << "In this example, we create an instance of class E which has a private member object of class A." << endl;
  cout << "Member objects are initialized in the order they are declared in the class, so for:" << endl;
  cout << "class E {" << endl;
  cout << "    A a;          // member-initializer: calls A::A() " << endl;
  cout << "public:" << endl;
  cout << "    E() {" << endl;
  cout << "  // then enters your E() body"<<endl;
  cout << "        cout << ... << endl;  // " << endl;
  cout << "    }" << endl;
  cout << "};" << endl;
  cout << "----------------------------------------------------------------" << endl;

  E obj4;
  cout<<"-----------------------------------------------------------------"<<endl;
  cout<<"In this we are having the default constructr with default parameters "<<endl;
  Sum sum(5);
  sum.display();


  return 0;
}