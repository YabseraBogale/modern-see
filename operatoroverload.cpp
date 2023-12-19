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
    for(int i=0;i<5;i++){
        ++w;
        std::cout<<w.GetWoodNumber()<<"\n";
    }
    std::cout<<w.GetWoodNumber()<<"\n";


    return 0;
}
