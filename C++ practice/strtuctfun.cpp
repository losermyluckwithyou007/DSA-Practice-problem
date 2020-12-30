#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breath;
};

void initialize(struct rectangle *r,int l,int b){

    r->length=l;
    r->breath=b;

}

int area(struct rectangle r){

    return r.length*r.breath;
}

void changelength(struct rectangle *r,int l){

    r->length=l;

}
int main()
{
    struct rectangle r;

    initialize(&r,10,5);
    area(r);
    changelength(&r,20);

}