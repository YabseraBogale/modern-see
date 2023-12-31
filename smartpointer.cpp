#include<iostream>
#include<memory>

int main(){

    std::unique_ptr<int> p= std::make_unique<int>(123);
    std::cout<<*p<<std::endl;
    int k=static_cast<int>(50.25);
    bool b=int(50.25)==k;
    std::cout<<b<<std::endl;
    return 0;
}