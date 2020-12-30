#include <iostream>
using namespace std;
struct structParameter
{
    int length;
    int breath;
};
int area(struct structParameter r){
    r.length++;
    return r.length*r.breath;
}
int main()
{

    struct structParameter r ={10,5};

    printf("%d",area(r));
    
    return 0;
}