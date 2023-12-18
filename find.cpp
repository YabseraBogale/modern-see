#include<iostream>
int main(){

    std::string s="this feels good";
    std::size_t find=s.find("good");
    if(find!=std::string::npos){
        std::cout<<"this feels good \n";
    } else{
        std::cout<<"this feels bad \n";
    }
    return 0;
}