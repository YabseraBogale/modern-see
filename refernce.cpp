#include<iostream>

int main(){
    int x=10;
    const int& y=x;
    std::cout<<"Before X "<<x<<" Y "<<y<<std::endl;
    x=9;
    std::cout<<"After X "<<x<<" Y "<<y<<std::endl;
    return 0;
}