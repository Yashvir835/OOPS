#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Base
{
public:
  void add(int a, int b)
  {
    cout << "The sum of two integers is :" << a + b << endl;
  }
  void add(double a, double b)
  {
    cout << "the sum of the two double is :" << a + b << endl;
  }
};

int main()
{
  Base yvm;
  cout << "The sum of two integers is :" << endl;
  yvm.add(10, 20); // Calls the first function

  cout << "The sum of the two double is:" << endl;
  yvm.add(10.2, 20.5); // Calls the second function
  return 0;
}
