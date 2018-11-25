#include<iostream>
using namespace std;
class Circle
{
public:
    Circle(float _x, float _y);
    Circle& move(float a, float b);
    void print() const;
private:
    float x;
    float y;
};

Circle::Circle(float _x, float _y) :x(_x), y(_y){};

Circle& Circle::move(float a, float b){
    x += a;
    y += b;
    return *this;
};

void Circle::print() const{
    cout<<x<<y<<endl;
};


int main()
{
    Circle c;
    c.print();
    c.move(10.0, 10.0);
    c.print();

    return 0;
}