#include<iostream>
class Shape{
    float width;
    float hieght;
    public:
        Shape(float x,float y) :width{x},hieght{y}{

        }

};
int main(){
    Shape rec{12,13};

    return 0;
}
