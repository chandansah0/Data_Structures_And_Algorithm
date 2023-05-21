

#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int front;
    int rear;
    int * arr;
};

int isEmpty(struct queue * q){
    if (q->rear == q->front)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct queue * q){
    if (q->rear == q->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct queue * q, int value){
    if (isFull(q))
    {
        printf("The stack is full.\n");
    }
    else{
        q->rear++;
        q->arr[q->rear] = value;
    }
}

int dequeue(struct queue * q){
    if (isEmpty(q))
    {
        printf("The stack is empty.\n");
    }
    else{
        q->front++;
        return q->arr[q->front];
    }
}

void display(struct queue * q){
    if (isEmpty(q))
    {
        printf("The queue is empty.\n");
        exit;
    }
    
    printf("The data in the queue is as follows: \n");
    for (int i = 0; i < q->rear+1; i++)
    {
        printf("%d\t",q->arr[i]);
    }
    printf("\n");
    
}

int main(){
    struct queue * q;
    q->size = 10;
    q->front = -1;
    q->rear = -1;
    q->arr = (int*) malloc(q->size * sizeof(int));
    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    display(q);
    printf("dequeue-d element = %d\n",dequeue(q));
    printf("dequeue-d element = %d\n",dequeue(q));
    printf("dequeue-d element = %d\n",dequeue(q));
    display(q);
    return 0;
}