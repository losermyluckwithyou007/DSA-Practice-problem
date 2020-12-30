#include <iostream>
using namespace std;

struct rectangle
{
    int lenght;
    int breath;

};
void changelength(struct rectangle *p,int l){
    p->breath=l;
}
int main(){

    struct rectangle r={10,5};

    changelength(&r,20);
    printf("%d",r.breath);
}