#include<iostream>
void custommessage(const std::string& s){
    std::cout<<"this is the message \n";
    std::cout<<s<<std::endl;
}
int main(){
    custommessage("Hello World");
    return 0;
}