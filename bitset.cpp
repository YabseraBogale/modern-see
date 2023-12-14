#include<iostream>
#include<bitset>
int main(){
    int num=0;
    std::cout<<"Enter number: ";
    std::cin>>num;
    std::bitset<4> fromuser(num);
    std::cout<<fromuser<<std::endl;
    std::bitset<4> machine(4);
    std::bitset<4> added;
    added=machine | fromuser;
    std::cout<<"Added " <<added<<"\n";
    return 0;
}