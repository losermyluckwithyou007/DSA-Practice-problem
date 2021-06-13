#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*top=NULL;

void push(int x){

    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));

    if(t==NULL)
    printf("\nStack is Full\n");

    else{
        t->data=x;
        t->next=top;
        top=t;
    }

}

void Display(){
    struct node *p;
    p=top;
    while(p!=NULL){
        printf(" %d",p->data);
        p=p->next;
    }
    printf("\n");

}

int pop(){
    struct node *p;
    int x=-1;
    if(top==NULL)
    printf("Stack Empty");
    else
    {
        p=top;
        top=top->next;
        x=p->data;
        free(p);
    }  
    return x;
}
int peek(int x){
    struct node *p;
    p=top;
    int i;
    for(i=0;i<x-1;i++){
        p=p->next;
    }

    return p->data;

}

int main(){
    
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    printf("\n pop = %d \n",pop());
    printf("\n peek = %d \n",peek(2));
    Display();

    return 0;
}