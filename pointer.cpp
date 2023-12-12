#include<iostream>

int main(){
    int x=10;
    const int* y=&x;
    std::cout<<"Before X "<<x<<" Y "<<*y<<std::endl;
    // this works b/c we are changing the x whic is mutable but
    // y=9; does work since it  immutable it is readonly
    *y=9;
    std::cout<<"After X "<<x<<" Y "<<*y<<std::endl;
    return 0;
}