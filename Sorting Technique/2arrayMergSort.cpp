#include <iostream>
using namespace std;
int C[15];

void mergSort(int A[], int B[], int m, int n){

    int i,j,k;
    i=j=k=0;


    while(i<m && j<n){

        if(A[i]<B[j]){
            C[k++]=A[i++];
        }
        else
            C[k++]=B[j++];
    }
    for(;i<m;i++)
        C[k++]=A[i];

    for(;j<n;j++)
        C[k++]=B[j];

}


int main(){

    int A[] = {2,10,13,18,20};
    int m =  sizeof(A)/sizeof(A[0]);

    int B[] = {4,9,19,25};
    int n =  sizeof(B)/sizeof(B[0]);

    cout<<"2arrayMergSort = ";
    mergSort(A, B, m, n);


    for(int i=0 ; i < m+n ; i++)
    cout<<C[i]<<" ";

    cout<<endl;

    return 0;
}