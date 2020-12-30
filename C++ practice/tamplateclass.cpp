#include <iostream>
using namespace std;

template<class T>
  class arithmetic
  {
  private:
      T a;
      T b;
  public:
     arithmetic(T a,T b);
        T add();
        T sub();
  };
  template<class T>
 arithmetic<T>::arithmetic(T a,T b)
  {
      this->a=a;
      this->b=b;
  }
  template<class T>
T arithmetic<T>::add()
{
      T c;
      c=a+b;
      return c;
}
  template<class T>
T arithmetic<T>::sub()
  {
    T s;
    s=a-b;
    return s;
  }
int main(){
    arithmetic <int> ar(10,5);
    cout<<ar.add()<<endl;
    arithmetic <float> ar(1.5,1.2);
    cout<<ar.sub()<<endl;
}