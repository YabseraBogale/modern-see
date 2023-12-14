#include<iostream>
#include<bitset>
int main(){
    std::bitset<4> fromuser(5);
    std::bitset<4> machine(4);
    std::bitset<4> added;
    added=machine | fromuser;
    std::cout<<"Added " <<added<<"\n";
    return 0;
}