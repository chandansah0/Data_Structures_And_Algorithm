//WAP in array implementation of stack

#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack * ptr){
    if (ptr->top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack * ptr){
    if (ptr->top >= ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void traverse(struct stack * ptr){
    for (int i = 0; i <= ptr->top; i++)
    {
        printf("%d\t",ptr->arr[i]);
    }
    printf("\n");
    
}

void push(struct stack * ptr, int value){
    if (isFull(ptr))
    {
        printf("The stack is full\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

void pop(struct stack * ptr){
    if (isEmpty(ptr))
    {
        printf("The stack is empty\n");
    }
    else{
        printf("popped element = %d\n", ptr->arr[ptr->top]);
        ptr->top--;
    }
    
}

int main(){
    struct stack * s;
    s->size = 10;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));
    push(s, 1);
    push(s, 2);
    push(s, 3);
    traverse(s);
    pop(s);
    pop(s);
    traverse(s);
    return 0;
}