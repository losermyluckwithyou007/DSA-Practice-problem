#include<stdio.h>
#include<string.h>

int main(){

    char A[]="Pawana";
    char B[]="Pwanm";

    int i,j;
    for(i=0,j=0;A[i]!='\0' && B[j]!='\0';j++,i++){

        if(A[i] != B[j])
        break;
        if(A[i]==B[j]){printf("Equal");}
        else if (A[i]<B[j]){printf("Smaller");}
        else printf("Greater");
    }

    return 0;
}