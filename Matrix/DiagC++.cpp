#include<iostream>
using namespace std;

class Diagonal
{
    private:
    int *A;
    int n;

    public:

    Diagonal(){
        n=2;
        A=new int[2];
    }
    Diagonal(int n){
        this->n=n;
        A=new int[n];
    }
    ~Diagonal(){
        delete []A;
    }
    void Set(int i,int j,int x);
    void Display();
    void display();
};
void Diagonal::Set(int i,int j,int x){

    if(i==j)
    A[i-1]=x;
}
void Diagonal::Display(){
    int i,j;
    for( i=0;i<n;i++){
        for( j=0;j<n;j++){
            if(i==j)
            cout<<A[i]<<" ";
            else 
            cout<<"0 ";           
        }
        cout<<endl;
    }
}
void Diagonal::display(){
    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int d,x,i,j;
    cout<<"\n Enter Dimensions of Matrix \n";
    cin>>d;

    Diagonal dm(d);
    
    for( i=1;i<=d;i++){
        for( j=1;j<=d;j++){
            cin>>x;
            dm.Set(i,j,x);
        }
    }
    dm.Display();
    dm.display();


    return 0;
}