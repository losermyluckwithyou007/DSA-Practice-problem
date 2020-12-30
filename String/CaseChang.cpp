#include<stdio.h>

int main(){

    char A[]="WelComE";

    for(int i=0;A[i]!='\0';i++){

        if(A[i]>=65 && A[i]<=90){
            A[i]+=32;
        }
        else if(A[i]>=97 && A[i]<=127){
            A[i]-=32;
        }
    }
    printf("\n %s \n",A);
    return 0;
}