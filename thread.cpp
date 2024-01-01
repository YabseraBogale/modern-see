#include<iostream>
#include<thread>
void function(){
    for(int i=0;i<5;i++){
        std::cout<<"Runing Program\n";
    }
}
int main(){
    std::thread th1{    function };

    th1.join();
    return 0;
}