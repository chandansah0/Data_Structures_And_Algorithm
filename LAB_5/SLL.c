// singly linked list creation and traversal

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traverse(struct Node * ptr){
    while (ptr != NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct Node * head = (struct Node*) malloc(sizeof(struct Node));
    struct Node * second = (struct Node*) malloc(sizeof(struct Node));
    struct Node * third = (struct Node*) malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;
    second->data = 8;
    second->next = third;
    third->data = 9;
    third->next = NULL;
    traverse(head);
    return 0;
}