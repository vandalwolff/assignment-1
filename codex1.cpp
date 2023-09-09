#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
  string clg,name;
  int age;
  cout<<"enter your name"<<endl;
  getline(cin,name);  
  cout<<"enter your college name"<<endl;
  getline(cin,clg);
  cout<<"enter your age"<<endl;     
  cin>>age;

  cout<<"Hello "<<name<<",I see you are "<<age<<" years old and currently studying at "<<clg;  

  return(0);
}