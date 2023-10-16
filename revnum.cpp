#include<iostream>

using namespace std;

int main(){
int n,j=0;
cout<<"Enter the number you want to reverse: ";
cin>>n;
while(n>0)
{j=j*10 + n%10;
n=n/10;}
cout<<"Your reversed number is "<<j;
return 0;
}


    
    

