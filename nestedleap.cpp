#include<iostream>

int main(){
int n;
std::cout<<"Please input your year: ";
std::cin >>n;
if(n%4==0)
   {
       if (n%100==0)
        {
            if (n%400==0)
        std::cout<<"This year is a leap year!";
        else
        std::cout<<"This year is not a leap year!";
        }
    else
    std::cout<<"This year is a leap year!";
    }
    else
        std::cout<<"This year is not a leap year!";
    return 0;
}


    
    

