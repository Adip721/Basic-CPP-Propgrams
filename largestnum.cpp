#include<iostream>

using namespace std;

int main(){
int a,b,c;
cout<<"Please enter the three number separated by spaces: ";
cin>>a>>b>>c;
if(a>=b)
      {if (a==b)
           {if (a>=c)
               {if (a==c)
                   cout<<"All three numbers are equal!"<<endl;
                   else
                    cout<<a<<" is the largest number!"<<endl;
               }
            else cout<<"The common number "<<a<<" is the largest number!"<<endl;
           }
         else if (b==c)
        cout<<a<<" is the largest number!"<<endl;
         else if (c>=a)
         {if (c==a)
             cout<<"The common number "<<a<<" is the largest number!"<<endl;
             else
                 cout<<"The largest number is "<<c<<"!"<<endl;
         }
      else if (b>=c)
          {if (b==c)
             cout<<"The common number "<<b<<" is the largest number!"<<endl;
             else
             cout<<b<<" is the largest number!"<<endl;
          }
       else 
       cout<<a<<" is the largest number!"<<endl;
      }
      else if (b>=c)
          {if (b==c)
             cout<<"The common number "<<b<<" is the largest number!"<<endl;
             else
             cout<<b<<" is the largest number!"<<endl;
          }
       else 
       cout<<c<<" is the largest number!"<<endl;
          
    return 0;
}


    
    

