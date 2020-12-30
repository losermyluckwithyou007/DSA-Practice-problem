#include <iostream>
using namespace std;

class rectangle
{ 
    private:

    int length;
    int breath;

    public:

    void initialize(int l,int b){
        length=l;
        breath=b;
    }
    int area(){

    return length*breath;
    }
    void changlen(int l){
        length=l;
    }
};


int main(){
    rectangle r;

    r.initialize(10,5);
    r.area();
    r.changlen(20);
    cout<<r.area();
}