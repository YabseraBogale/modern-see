#include<iostream>
class WoodAdder{
        int wood;
        public:
            WoodAdder& operator++(){
                wood++;
                return *this;
            }
            int GetWoodNumber(){    return wood;}
            WoodAdder& operator+=(const WoodAdder& rh){
                this->wood+=rh.wood;
                return *this;
            }
            friend WoodAdder operator+(const WoodAdder& rh1,WoodAdder rh2){
                rh2+=rh1;
                return rh2;
            }
};

int main(){

    WoodAdder w1,w2,w3;
    ++w1;
    ++w2;
    w3=w2+w1;
    std::cout<<w3.GetWoodNumber()<<"\n";


    return 0;
}
