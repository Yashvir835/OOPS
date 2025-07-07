#include<iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
  cout<<"This is the example of reading data from a file using fstream ios::in method and ifstream "<<endl;
  cout<<"_________________________________________________________________________________"<<endl;
  cout<<"Reading data from a file using fstream ios::in method"<<endl;

  fstream read_file("read.txt",ios::in);
  if(!read_file.is_open()){
    cerr<<"Error in opening the file read.txt"<<endl;
    return 1;
  }

  string line;

  // std::getline() reads entire lines, including spaces.
  while(getline(read_file,line)){
    cout<<line<<endl;

  }

  //  EOF stands for “End Of File".
  // getline() reads the data in the file and once the end is reach then eof is set to true
  if(read_file.eof()){
    cout<<"Reach the end of file."<<endl;
    cout<<""<<endl;
    cout<<read_file.eof()<<endl;
  }
  else{
    cerr<<"Thier is and error in opening the file"<<endl;
  }

  read_file.close();
  cout<<"___________________________________________________________"<<endl;
  cout<<"Reading a file using ifstream "<<endl;
  // ifstream have default mode ios::in
  ifstream read_file1("read.txt");
  if(!read_file1.is_open()){
    cerr<<"Thier is an error in opening of the file"<<endl;
  }
  string line1;

  // std::getline() reads entire lines, including spaces.
  while(getline(read_file1,line1)){
   cout<<line1<<endl;
  }

  if(read_file1.eof()) cout<<"Reach the end of the file "<<endl;
  else cout<<"Thier is and error in reading of file"<<endl;
  read_file1.close();
  return 0;
}