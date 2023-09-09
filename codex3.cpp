//Using logical operators, check the greatest out of three numbers 
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the three numbers: "<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<a<<" is the largest number";
    }   
    else if(b>a&&b>c){
        cout<<b<<" is the largest number";
    }
    else if(c>a&&c>b){
        cout<<c<<" is the largest number";
    }
    else{
        cout<<"numbers are equal";
    }

}