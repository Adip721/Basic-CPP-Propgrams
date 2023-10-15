#include<iostream>


int main(){
    double Tc,Tf;
    std::cout<<"Please enter your temparature in degree Celsius:"; 
    std::cin >> Tc;
    Tf = 1.8*Tc + 32;
    std::cout<<"Your temparature in degree Farenheit is: "<<Tf;
    return 0;
    }
    
    

