#include<iostream>

int main(){
int n;
std::cout<<"Please input your year: ";
std::cin >>n;
if(n%4==0)
   {if (n%100==0)
        {std::cout<<"This year is a century year, which is divisible by 4, but is not a leap year!";
        }
    else
    std::cout<<"This year is a leap year!";
    }
    else
        std::cout<<"This year is not a leap year!";
    return 0;
}
    
    

