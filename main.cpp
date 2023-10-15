#include<iostream>


int main(){
    int a,b,c;
    std::cout << "Please Enter a variable x: " <<std::endl;
    std::cin >> a;
    std::cout << "Please Enter a variable y:"<<std::endl;
    std::cin >> b;
    std::cout << "The variables you have entered are x: "<< a <<" and y: "<< b <<std::endl;
    c=b;
    b=a;
    a=c;
    std::cout<<"After swapping, your new variables are x: "<< a <<" and y: "<< b <<std::endl;
    return 0;
}
    
    

