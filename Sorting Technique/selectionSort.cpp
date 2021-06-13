#include <iostream>
using namespace std;

void swap(int *x, int *y){

    int temp;
    temp=*y;
    *y=*x;
    *x=temp;
}

void selectionSort(int A[], int n){

    int i,j,k;

    for(i=0;i<n-1;i++){
        for(j=k=i;j<=n;j++){
            
            if(A[j]<A[k])
            k=j;
        }
        swap(&A[i], &A[k]);    
    }


}

int main(){

    int A[] = {4,5,8,10,1,3,2,6,9};
    int n = sizeof(A)/sizeof(A[0]);


    cout<<"insertionSort = ";
    selectionSort(A,n);


    for(int i=0 ; i < n ; i++)
    cout<<A[i]<<" ";

    cout<<endl;

    return 0;
}