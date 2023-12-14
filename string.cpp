#include<iostream>
#include<typeinfo>
int main(){
    std::string s="";
    std::getline(std::cin,s);
    size_t t=s.find("j");
    std::cout<<t<<std::endl;
   return 0;
}