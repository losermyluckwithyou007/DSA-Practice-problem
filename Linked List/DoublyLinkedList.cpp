#include<iostream>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*first=NULL;

void create(int A[],int n){

    int i;
    struct node *t,*last;

    first=(struct node*)malloc(sizeof(struct node));
    first->prev=NULL;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}
void Display(struct node *p){
    p=first;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

int insert(int pos,int x){

    struct node *p,*t;
    p=first;
    int i;
    for(i=1;i<pos-1;i++){
        p=p->next;
    }
    t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    t->next=p->next;
    t->prev=p;

    if(p->next)
    p->next->prev=t;

    p->next=t;

    
    return 0;
}

void Delete(int key){

    struct node *p,*q;
    p=first;
    while(p!=NULL){
        if(p->data==key){
            q->next=p->next;
            if(p->next)
            p->next->prev=q;
            free(p);           
        }
        q=p;
        p=p->next;
    }
}
int length(struct node *p){

    int len=0,i;
    while(p!=NULL)
    {
        len++;
        p=p->next;
    }

    return len;
}

int main(){

    int A[]={1,2,3,4,5};
    create(A,5);
    insert(6,6);
    Delete(6);
    Display(first);
    printf("\nlenght = %d",length(first));
    return 0;
}