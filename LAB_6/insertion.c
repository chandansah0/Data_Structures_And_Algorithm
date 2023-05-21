// insertion at the begining in the end and in between in doubly linked list

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
};

void traverse(struct Node * ptr){
    while (ptr != NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct Node * insBeg(struct Node * ptr, int value){
    struct Node * newhead = (struct Node*) malloc(sizeof(struct Node));
    newhead->prev = NULL;
    newhead->data = value;
    newhead->next = ptr;
    return newhead;
}

struct Node * insEnd(struct Node * ptr, int value){
    struct Node * node = (struct Node*) malloc(sizeof(struct Node));
    struct Node * p = ptr;
    while ((p->next) != NULL)
    {
        p = p->next;
    }
    p->next = node;
    node->prev = p->prev;
    node->data = value;
    node->next = NULL;
    return ptr;
}

struct Node * insBet(struct Node * ptr, int value, int index){
    struct Node * node = (struct Node*) malloc(sizeof(struct Node));
    struct Node * p = ptr;
    int i = 0;
    while (i != (index-1))
    {
        p = p->next;
        i++;
    }
    node->prev = p->prev;
    node->data = value;
    node->next = p->next;
    p->next = node;
    return ptr;
}

int main(){
    struct Node * head = (struct Node*) malloc(sizeof(struct Node));
    struct Node * second = (struct Node*) malloc(sizeof(struct Node));
    struct Node * third = (struct Node*) malloc(sizeof(struct Node));
    head->prev = NULL;
    head->data = 7;
    head->next = second;
    second->prev = head->next;
    second->data = 8;
    second->next = third;
    third->prev = second->next;
    third->data = 9;
    third->next = NULL;
    traverse(head);

    //insertion at the beginning
    head = insBeg(head,6);
    traverse(head);

    //insertion at the end
    head = insEnd(head,10);
    traverse(head);

    //insertion in between
    head = insBet(head,55,2);
    traverse(head);
    return 0;
}