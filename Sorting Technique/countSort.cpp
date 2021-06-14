#include <iostream>
using namespace std;

int findMax(int A[], int n){

    int max = INT32_MIN;

    for(int i=0;i<n;i++){
        if(A[i]>max)
        max=A[i];
    }

    return max;

}

void countSort(int A[], int n){

    int max,i,j;
    int *C;

    max=findMax(A,n);
    C = new int[max+1];

    for(i=0;i<n;i++)
        C[i]=0;

    for(i=0;i<n;i++)
        C[A[i]]++;
    
    i=0;j=0;
    while(i<max+1){
        if(C[i]>0){
            A[j++]=i;
            C[i]--;
        }
            

        else
            i++;
            

    }      

}

int main(){

    int A[] = {4,5,8,10,1,3,2,6,9};
    int n = sizeof(A)/sizeof(A[0]);


    cout<<"countSort = ";
    countSort(A,n);


    for(int i=0 ; i < n ; i++)
    cout<<A[i]<<" ";

    cout<<endl;

    return 0;
}