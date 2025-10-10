#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct stack{
int top;
int data[SIZE];
};
typedef struct stack STACK;
void push(STACK *S,int item)
{
    if(S->top == SIZE-1)
        printf("\n stack over flow");
    else
        {
        S->top =S->top+1;
        S->data[S->top]=item;

    }
}
void pop(STACK *s)
{
    if(s->top == -1)
        printf("\n stack underflow");
    else{
        printf("\n element poped is %d",s->data[s->top]);
        s->top = s->top-1;
    }
}
void display(STACK s)
{
    int i;
    if(s.top == -1)
        printf("\n stack empty");
    else{
        printf("\n stack content are\n");
        for(i=s.top;i>=0;i--)
            printf("%d\n",s.data[i]);
    }
}

int main()
{
    int ch,item;
    STACK s;
    s.top = -1;
    for(;;){
        printf("\n 1.push \n 2.pop \n 3.display \n 4.exit");
        printf("\n read the choice:");
        scanf("%d",&ch);
        switch(ch){
        case 1:
            printf("\n read the items to be pushed :");
            scanf("%d",&item);
            push(&s,item);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            display(s);
        }
    }

    return 0;
}
