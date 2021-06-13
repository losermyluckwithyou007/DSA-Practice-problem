#include<iostream>

class Node
{
    public: 
        int data;
        Node *next;
};
class Stack
{
    private:
       Node *top;
    public:
        Stack(){top=NULL;}
        void push(int x);
        int pop();
        void Display();
};
void Stack::Display(){
    struct Node *p;
    p=top;
    while(p!=NULL){
        printf(" %d",p->data);
        p=p->next;
    }
    printf("\n");

}
void Stack::push(int x){
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node*));
    if(t==NULL)
    printf("Stack is Full");

    else {
        t->data=x;
        t->next=top;
        top=t;
    }
}
int Stack::pop(){
    struct Node *p;
    int x=-1;
    if(top==NULL)
    printf("Stack is Empty");

    else
    {   p=top;
        x=p->data;
        top=top->next;
        free(p);
    }   
    return x;
}
int main(){
    Stack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);
    printf("\nPop = %d\n",stk.pop());
    stk.Display();
    return 0;
}