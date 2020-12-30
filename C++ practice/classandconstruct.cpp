#include <iostream>
using namespace std;

class Rectangle
{
    private:

    int length;
    int breath;

    public:
    Rectangle(){length=breath=1;}
    Rectangle(int l, int b);

    int area();

    int parameter();

    int getlength()
    {return length;}

    void setlength(int l)
    {length=l;}

    ~Rectangle();
    
};
Rectangle::Rectangle(int l,int b)
{length=l; breath=b;}

int Rectangle::area(){
    return length*breath;
}

int Rectangle::parameter()
{return 2*(length+breath);}

Rectangle::~Rectangle()
{}

int main(){
    Rectangle r(10,5);
    cout<<r.area()<<endl;
    cout<<r.parameter()<<endl;
    r.setlength(20);
    cout<<r.getlength()<<endl;
}