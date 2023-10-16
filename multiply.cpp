#include<iostream>

using namespace std;

int main(){
int a,c;
  cout<<"Please enter the number you want the multiplication table of: ";
  cin>>a;   
  c=a;
  for(int b=1; b<=20; b++)
  {a = a*b;
  cout<<c<<"*"<<b<<"="<<a<<endl;
  a=c;
  }
  return 0;
}


    
    

