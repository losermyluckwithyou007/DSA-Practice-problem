#include <stdio.h>

int pen(int *A,int n){

    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d",A[i]);
    }     
}
int main(){

    int A[5]={1,2,8,4,6};
    pen(A,5); 
    
}
