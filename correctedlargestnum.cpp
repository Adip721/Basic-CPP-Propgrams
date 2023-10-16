#include<iostream>

using namespace std;

int main(){
int a,b,c;
cout<<"Please enter the value of three numbers separated by space: ";
cin>>a>>b>>c;
if(a==b && c>b)
        cout<<c<<" is the largest number!";
        else if (a==b && b>c)
            cout<<a<<" is the common number which is the largest!";
            else if (b==c && c>a)
                cout<<c<<" is the common number which is the largest!";
                else if (b==c && a>c)
                    cout<<a<<" is the largest number!";
                    else if (a==c && a>b)
                        cout<<c<<" is the common number which is the largest!";
                        else if (a==c && b>a)
                            cout<<b<<" is the largest number!";
                            else if (a>b && a>c)
                                cout<<a<<" is the largest number!";
                                else if (b>a && b>c)
                                    cout<<b<<" is the largest number!";
                                    else if (c>a && c>b)
                                        cout<<c<<" is the largest number!";
                            else cout<<"All three numbers are same!";
                                return 0;
                            
                        
}




    
    

