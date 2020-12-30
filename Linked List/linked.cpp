#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
}*first;

int insert(int pos,int x){
    int i;
    struct node *t,*p;
    p=first;
    t=(struct node*)malloc(sizeof(struct node));
    if(pos==0){
        t->data=x;
        t->next=NULL;
        first=t;
    }
    else
    {
        for(i=0;i<pos-1;i++){
            p=p->next;
        }
        t->data=x;
        t->next=p->next;
        p->next=t;
    }
    return 0;
}

void Display(struct node *p){

    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }    
    
}

int main(){

    insert(1,1);
    insert(2,2);
    Display(first);

    return 0;
}
