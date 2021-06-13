#include <iostream>
using namespace std;

void swap(int *x, int *y){

    int temp;
    temp=*y;
    *y=*x;
    *x=temp;
}

void bubbleSort(int A[], int n){
    
    int i,j,flag;

    for(i=0;i<n-1;i++){
        flag=0;

        for(j=0;j<n-1-i;j++){

            if(A[j]>A[j+1]){
                swap(&A[j], &A[j+1]);
                flag=1;
            }
        } 
        if(flag==0) break;
    }
}

int main(){

    int A[] = {4,5,8,10,1,3,2,6,9}; int n = sizeof(A)/sizeof(A[0]);



    cout<<"BubbleSort = ";
    bubbleSort(A,n);


    for(int i=0 ; i < n ; i++)
    cout<<A[i]<<" ";

    cout<<endl;

    return 0;
}