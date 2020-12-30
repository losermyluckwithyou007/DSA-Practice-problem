#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    printf("\n Display All element \n");
    int i;
    for(i=0;i<arr.length-1;i++){
        printf(" %d \n",arr.A[i]);
    }
}

int append(struct Array *arr,int x){
    printf("\n Append element \n");

    arr->A[arr->length]=x;
    arr->length++;

    return 0;
}
int insert(struct Array *arr,int index,int x){

    int i;

    if(index>=0 && index <=arr->length)
    
    for(i=arr->length;i>index;i--){
    arr->A[i]=arr->A[i-1]; 
    }
    arr->A[index]=x;
    arr->length++;

    return 0;
}
int Delete(struct Array *arr,int index){

    int i;
    printf("Delete element");
    if(index>=0 && index <=arr->length)
    
    for(i=index;i<arr->length;i++){
    arr->A[i]=arr->A[i+1]; 
    }
    arr->length--;

    return 0;
}

int swap(int *x,int *y){

    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

    return 0;
}

int Lsearch(struct Array *arr,int key){
    int i;

    for(i=0;i<arr->length;i++)
    if(key==arr->A[i]){

        swap(&arr->A[i],&arr->A[0]);

        printf("\n Key is found %d \n",arr->A[i]);
    return i;
    }
    return -1;
}

int Bsearch(struct Array *arr,int key){

    int l,h,mid;
    l=0;
    h=arr->length-1;
    
    while(l<=h){
        mid=(l+h)/2;
        if(key==arr->A[mid]){
        return mid;
    }
    else if (key<arr->A[mid])
        h=mid-1;
    else 
        l=mid+1;  
    }
        
    return -1;
    
}
int get(struct Array arr,int index){

    printf("\n Get element %d \n",arr.A[index]);

    return 0;
}
int sum(struct Array arr){
    int sum=0,i;

    for(i=0;i<arr.length;i++){
        sum+=arr.A[i];
    }
    return sum;
}
int Max(struct Array arr){

    int max,i;
    max=0;
    for(i=0;i<arr.length;i++){
        if(max<arr.A[i])
        max=arr.A[i];
    }
    return max;
}
int Reverse(struct Array *arr){
    int i,j,temp;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
    return 0;
}
int reverse(struct Array *arr){

    printf("reverse with swap");

    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        swap(&arr->A[i],&arr->A[j]);
    }

    return 0;

}
void ReverseCopy(struct Array *arr){

    int *B,i,j;
    B=(int *)malloc(arr->length*sizeof(int));

    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }
    for(i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }
    
}

int main(){
    struct Array arr={{2,3,4,5,6,7,8,9},10,9};

    // append(&arr,10);
    // insert(&arr,0,1);
    // Delete(&arr,3);
    Display(arr);
    // Lsearch(&arr,5);
    // printf("\n Bsearch A[%d] \n",Bsearch(&arr,6));
    // Display(arr);
    // get(arr,2);
    // printf("\n Sum of All Element %d \n",sum(arr));
    // printf("\n Max %d \n",Max(arr));
    // Reverse(&arr);
    // reverse(&arr);
    ReverseCopy(&arr);
    Display(arr);
    return 0;
}