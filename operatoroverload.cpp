#include<iostream>
class WoodAdder{
        int wood;
        public:
            WoodAdder(){
                wood=0;
            }
            WoodAdder& operator++(){
                ++wood;
                return *this;
            }
            int GetWoodNumber(){    return wood;}
};

int main(){

    WoodAdder w;
    ++w;
    std::cout<<w.GetWoodNumber()<<"\n";


    return 0;
}
