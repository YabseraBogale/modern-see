#include<iostream>
#include<typeinfo>
int main(){
    std::string s="";
    std::getline(std::cin,s);
    std::cout<<s<<std::endl;
    std::cout<<typeid(s.find("h")).name()<<std::endl;
    return 0;
}