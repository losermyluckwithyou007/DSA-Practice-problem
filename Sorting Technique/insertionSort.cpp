#include <iostream>
using namespace std;


void insertionSort(int A[], int n){

    int i,j,x;

    for(i=1;i<n;i++){

        j=i-1;
        x=A[i];

        while(j>-1 &&  A[j]>x){

                A[j+1]=A[j];
                j--;
        }
        A[j+1]=x;
    }
}

int main(){

    int A[] = {4,5,8,10,1,3,2,6,9};
    int n = sizeof(A)/sizeof(A[0]);


    cout<<"insertionSort = ";
    insertionSort(A,n);


    for(int i=0 ; i < n ; i++)
    cout<<A[i]<<" ";

    cout<<endl;

    return 0;
}