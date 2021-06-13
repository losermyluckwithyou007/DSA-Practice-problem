#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st){

    printf("Enter Size of Stack\n");
    scanf("%d",&st->size);
    st->top=-1;
    st->S=(int *)malloc(st->size*sizeof(int)); 

}

void push(struct Stack *st,int x){

    if(st->top==st->size-1)
        printf("\nStack is Overflow\n");
        
    else{
        st->top++;
        st->S[st->top]=x;
    }
}

void display(struct Stack st){
    int i;
    for(i=st.top;i>=0;i--){
        printf("%d ",st.S[i]);
    }
    printf("\n");
}

int pop(struct Stack *st)
{
    int x=-1;
    if(st->top==-1)
        printf("\nStack Underflow\n");
    else
    {
        x=st->S[st->top--];
    }
    return x;
}

int peek(struct Stack st,int index){

    int x=-1;
    if(st.top==-1)
    printf("\nStack is underflow\n");

    else{
        x=st.S[st.top-index+1];
    }
    return x;
}

int main(){
    struct Stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50); 
    printf("\n peek = %d \n",peek(st,2));
    printf("\n Pop = %d \n",pop(&st));
    printf("\n Pop = %d \n",pop(&st));
    display(st);
    return 0;
}