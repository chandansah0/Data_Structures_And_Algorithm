// deletion in a singly linked list

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
    printf("\n");
}

struct Node * delBeg(struct Node * ptr){
    struct Node * temp = ptr;
    ptr = ptr->next;
    free(temp);
    return ptr;
}

struct Node * delEnd(struct Node * ptr){
    struct Node * p = ptr;
    struct Node * q = ptr->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return ptr;
}

struct Node * delBet(struct Node * ptr, int index){
    struct Node * p = ptr;
    struct Node * q = ptr->next;
    int i = 0;
    while (i != index-1)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return ptr;
}

int main(){
    struct Node * head = (struct Node*) malloc(sizeof(struct Node));
    struct Node * second = (struct Node*) malloc(sizeof(struct Node));
    struct Node * third = (struct Node*) malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node*) malloc(sizeof(struct Node));
    struct Node * fifth = (struct Node*) malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;
    second->data = 8;
    second->next = third;
    third->data = 9;
    third->next = fourth;
    fourth->data = 10;
    fourth->next = fifth;
    fifth->data = 11;
    fifth->next = NULL;
    traverse(head);

    //deletion at the beginning
    head = delBeg(head);
    traverse(head);

    //deletion at the end
    head = delEnd(head);
    traverse(head);

    //deletion at index 1
    head = delBet(head,1);
    traverse(head);
    return 0;
}