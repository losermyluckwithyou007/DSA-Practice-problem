#include<iostream>

struct node
{
    int data;
    struct node *next;
}*head;

void create(int A[],int n){

    int i;
    struct node *t,*last;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=A[0];
    head->next=head;
    last=head;

    for(i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
    
}

void display(struct node *h){
    static int flag=0;
    while (h!=head || flag==0)
    {
        flag=1;
        printf("%d ",h->data);
        h=h->next;
    }
    flag=0;   
}
void Rdisplay(struct node *h){

    static int flag=0;
    if(h!=head || flag==0){ 
        flag=1;
        printf("%d ",h->data);
        Rdisplay(h->next);
    }
    flag=0;
}

void insert(struct node *p,int pos,int x){

    struct node *t;
    int i;
    p=head;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    t->next=NULL;
    for(i=1;i<pos-1;i++){       
        p=p->next;
    }
    t->next=p->next;
    p->next=t; 

}

int main(){

    int A[]={2,5,6,8,10};
    create(A,5);
    Rdisplay(head);
    printf("\n");
    insert(head,5,9);
    display(head);

    return 0;

}
