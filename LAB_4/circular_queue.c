#include<stdio.h>
#include<stdlib.h>

struct circularQueue{
    int size;
    int front;
    int rear;
    int * arr;
};

int isEmpty(struct circularQueue * q){
    if (q->rear == q->front)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct circularQueue * q){
    if ((q->rear+1) % (q->size) == q->front)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct circularQueue * q, int value){
    if (isFull(q))
    {
        printf("The stack is full.\n");
    }
    else{
        q->rear = (q->rear + 1) % q->size;
        q->arr[q->rear] = value;
    }
}

int dequeue(struct circularQueue * q){
    if (isEmpty(q))
    {
        printf("The stack is empty.\n");
    }
    else{
        q->front = (q->front + 1) % q->size;
        return q->arr[q->front];
    }
}

void display(struct circularQueue * q){
    printf("The data in the circularQueue is as follows: \n");
    for (int i = 0; i < q->size; i++)
    {
        printf("%d\t",q->arr[i]);
    }
    printf("\n");
    
}

int main(){
    struct circularQueue * q;
    q->size = 3;
    q->front = -1;
    q->rear = -1;
    q->arr = (int*) malloc(q->size * sizeof(int));
    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    display(q);
    enqueue(q, 4);
    display(q);
    enqueue(q, 5);
    printf("dequeue-d element = %d\n",dequeue(q));
    printf("dequeue-d element = %d\n",dequeue(q));
    display(q);
    return 0;
}