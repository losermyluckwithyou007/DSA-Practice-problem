#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;

};



int Add(struct Array arr,int x){

    printf("\n Adding element \n");
    arr.A[arr.length]=x;
    arr.length++;

    return 0;
} 

int Display(struct Array arr){

    printf("\n Display All Element \n");
    for(int i=0;i<arr.length;i++){
        printf(" %d \n",arr.A[i]);
    }
    return 0;
}

int main(){

    struct Array arr;
    int  i,n;
    printf("\n  Enter  size of an array  \n");
    scanf("  %d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(struct Array));
    arr.length=0;
    printf("\n Enter number of numbers  \n");
    scanf("  %d",&n);
    
    printf("\n Enter all the Element  \n");

    for(i=0;i<n;i++){
        scanf("  %d",&arr.A[i]);
    }
    arr.length=n;

    Display(arr);
    Add(arr,8);
    Display(arr);

    return 0;

}