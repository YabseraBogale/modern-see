#include<iostream>
#include <ostream>
class Shape{
    float width;
    float hieght;
    public:
        Shape(float x,float y) :width{x},hieght{y}{

        }
        void SetWidth(float x){ width=x;}
        void SetHieght(float y){    hieght=y;}
        float GetWidth(){ return width;}
        float GetHieght(){  return hieght;}
};
int main(){
    Shape rec{12,13};
    Shape tri=rec;
    rec.SetHieght(4.0);
    std::cout<<"rec x: "<<rec.GetWidth()<<" y: "<<rec.GetHieght()<<std::endl;
    std::cout<<"tri x: "<<tri.GetWidth()<<" y: "<<tri.GetHieght()<<std::endl;
    return 0;
}
