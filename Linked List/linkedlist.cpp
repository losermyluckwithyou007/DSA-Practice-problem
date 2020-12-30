#include<iostream>

struct node
{
    int data;
    struct node *next;
}*first=NULL,*second=NULL,*third=NULL;

void Create(int A[],int n){

    int i;
    struct node *t,*last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void Create2(int A[],int n){

    int i;
    struct node *t,*last;
    second=(struct node *)malloc(sizeof(struct node));
    second->data=A[0];
    second->next=NULL;
    last=second;

    for(i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p){

    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }

}
void Rdisplay(struct node *p){
    

    while(p!=NULL){
        printf("%d ",p->data);
        return Rdisplay(p=p->next);
    }
}
int count(struct node *p){

    int l=0;
    while(p){
        l++;
        p=p->next;
    }
    return l;
}
int sum(struct node *p){
    int sum=0;
    while(p!=NULL){
        sum+=p->data;
        p=p->next;
    }
    return sum;
}
int max(struct node* p){
    int max=INT32_MIN;

    while(p){
        if(p->data>max)
        max=p->data;
        p=p->next;
    }
    return max;
}
node* search(node *p,int key){

    

    while(p!=NULL){
        if(key==p->data){
            return (p);
        }
        p->next;
    }
    return 0;
}
int insert(int pos,int x){
    int i;
    struct node *t,*p;
    p=first;
    t=(struct node*)malloc(sizeof(struct node));
    if(pos==0){
        t->data=x;
        t->next=first;
        first=t;
    }
    else
    {
        for(i=1;i<pos-1;i++){
            p=p->next;
        }
        t->data=x;
        t->next=p->next;
        p->next=t;
    }
    return 0;
}
int insertsort(struct node *p,int x){

    struct node *t,*q=NULL;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    first=t;
    else{
        while(p && p->data < x)
        {q=p;
        p=p->next;}
        if(p==first){
            t->next=first;
            first=t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
    }
    return 0;
}
int Delete(struct node *p,int pos){

    struct node *q;
    int i;
    for(i=0;i<pos-1;i++){
        q=p;
        p=p->next;
    }
    q->next=p->next;

    free(p);
    return 0;
}
int isSorted(struct node *p){
    int x=-65536;
    while(p!=NULL){
        if(p->data < x){
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 1;

}
// int Duplicate(struct node *p){
//     node *p=first;
//     node *q=first->next;
    
//     while(p!=NULL){
    
//     if(p->data!=q->data) 
//     {
//         p=q;
//         q=q->next;
//     }
//     else{
//         p->next=q->next;
//         free(q);
//         q=p->next;
//     }

//     }

//     return 0;
// }
void Reverse(struct node *p){

    int A[5],i;
    p=first;
    while(p!=NULL){
        A[i++]=p->data;
        p=p->next;
    }
    p=first;i--;
    while(p!=NULL){
        p->data=A[i--];
        p=p->next;
    }
}
void reverse(struct node *p){
    struct node *q,*r;
    p=first;
    q=NULL;
    r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

void Merging(struct node *p,struct node *q){

      struct node *last;

    if(first->data < second->data){

        third=last=first;
        first=first->next;
        last->next=NULL;
    }
    else{
        third=last=second;
        second=second->next;
        last->next=NULL;
    }
    while(first!=NULL && second!=NULL){
        if(first->data < second->data){

            last->next=first;
            last=first;
            first=first->next;
            last->next=NULL;
        }
        else
        {
        last->next=second;
        last=second;
        second=second->next;
        last->next=NULL;
        }
        
    }
    if(first!=NULL){
        last->next=first;
    }
    else{
        last->next=second;
    }

}
int isloop(struct node *f){
    struct node *q,*p;
    p=q=f;

    do
    {
    p=p->next;
    q=q->next;
    q=q?q->next:q;
    } while (p&&q && p!=NULL);
    return p==q?true:false;   
}


int main(){
    int A[]={2,5,6,8,10},B[]={1,3,4,7,9}; 
    struct node* temp;
    Create(A,5);
    Create2(B,5);
    printf("\n");
    // insert(3,1);
    // insertlast(2);
    // insertsort(first,3);
    // Delete(first,3);
    display(first);
    // if(isSorted(first)){
    //     printf("\n Sorted \n");
    // }
    // else{
    //     printf("\n Not Sorted \n ");
    // }
    
    // Duplicate(first);
    // reverse(first);
    printf("\n");
    Rdisplay(second);
    Merging(first,second);
    printf("\n");
    Rdisplay(third);
    if(isloop(first)){
        printf("\n IsLoop \n");
    }
    else{
        printf("\n NotLoop \n");
    }
    // printf("\n Count = %d \n",count(first));
    // printf("\n sum = %d \n",sum(first));
    // printf("\n max = %d \n",max(first));
    // temp=search(first,2);
    // printf("\n Search = %d \n",temp->data); 
    printf("\n");
    return 0;
}