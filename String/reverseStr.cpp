#include<stdio.h>
#include<String>

int main(){

    char A[]="Python";
    char B[7];
    int i,j;
    for(i=0;A[i]!='\0';i++)
    {}
    i=i-1;
    for(j=0;i>=0;j++,i--)
    {
        
        B[j]=A[i];
        
    }
    B[j]='\0';
    printf("%s",B);
    return 0;
}