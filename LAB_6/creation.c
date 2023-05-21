// creation and traversal in double linked list

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
};

void traverse(struct Node * ptr){
    do
    {
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }while (ptr != NULL);
}

int main(){
    struct Node * head = (struct Node*) malloc(sizeof(struct Node));
    struct Node * second = (struct Node*) malloc(sizeof(struct Node));
    struct Node * third = (struct Node*) malloc(sizeof(struct Node));
    head->prev = NULL;
    head->data = 7;
    head->next = second;
    second->prev == head->next;
    second->data = 8;
    second->next = third;
    third->prev = second->next;
    third->data = 9;
    third->next = NULL;
    traverse(head);
    return 0;
}