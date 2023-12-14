#include<iostream>
int main(){
    std::string Name="Yabsera Bogale";
    std::string LastName="Bogale";
    std::size_t found=Name.find(LastName);
    if(found !=std::string::npos){
        std::cout<<"There is Last Name at "<<found<<"\n";
        std::cout<<"The letter "<<Name[found]<<"\n";
    }
    return 0;
}