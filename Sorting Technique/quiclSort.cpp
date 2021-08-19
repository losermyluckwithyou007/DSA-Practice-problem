#include <iostream>
using namespace std;

void swap(int *x, int *y){

    int temp;
    temp=*y;
    *y=*x;
    *x=temp;
}


int partition(int A[], int l, int h){

    int pivot=A[l];
    int i=l,j=h;

    do{

        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);

        if(i<j)
            swap(&A[i], &A[j]);

    }while(i<j);

    swap(&A[l], &A[j]);
    return j;
}

void quickSort(int A[], int l, int h){

    int j;

    if(l<h){
        j=partition(A,l,h);
        quickSort(A,l,j);
        quickSort(A,j+1,h);
    }
}

int main(){

    int A[] = {4,5,8,10,1,3,2,6,9}; 
    int n = sizeof(A)/sizeof(A[0]);

    int l=0,h=INT32_MAX;


    cout<<"Quicksort = ";
    quickSort(A,l,h);


    for(int i=0 ; i < n ; i++)
    cout<<A[i]<<" ";

    cout<<endl;

    return 0;
}