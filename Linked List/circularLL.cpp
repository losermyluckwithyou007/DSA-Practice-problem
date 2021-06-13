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
void WhileDisplay(struct node *h){

    while(h!=head){ 
        printf("%d ",h->data);
        WhileDisplay(h->next);
    }
    
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
int length(struct node *p){
    int len=0;
    p=head;
    do {
        p=p->next;
        len++;
    }while(p!=head);
    return len;

}
int Sum(struct node *p){
    int sum=0;
    
    do{

        sum=sum+p->data;
        p=p->next;
        
    } while(p!=head);
    return sum;
}
int max(struct node *p){

    int max=INT32_MIN;
    do{
        if(p->data > max){
            max=p->data;
        }
        
            p=p->next;
        
    }while(p!=head);

    return max;
}
int search(struct node *p,int key){

    do{
        if(p->data==key){
            return key;
        }
        p=p->next;
    }while(p!=head);
    return -1;
}
int Delete(int pos){

    int i;
    struct node *q,*p;
    p=head;

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
    do{
        if(p->data < x){
            return 0;
        }
        x=p->data;
        p=p->next;
    }while(p!=head);
    return 1;

}

int main(){

    int A[]={2,5,6,8,10};
    create(A,5);
    Rdisplay(head);
    insert(head,5,9);
    insert(head,1,0);
    printf("\n");
    Rdisplay(head);
    printf("\nlength = %d ",length(head));
    WhileDisplay(head);
    printf("\nSum of Linked List Elemnt %d",Sum(head));
    printf("\nMax in Linked List Elemnt %d",max(head));
    printf("\nSearch key in linked list %d\n",search(head,3));
    Delete(5);
    display(head);
    if(isSorted(head)){
        printf("\n Sorted \n");
    }
    else{
        printf("\n Not Sorted \n ");
    }
    return 0;

}
