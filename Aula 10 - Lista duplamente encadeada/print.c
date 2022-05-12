// Implemente a função printar lista duplamente encadeada

#include <stdio.h>
#include <stdlib.h>

struct node {
    int item;
    struct node* next;
    struct node* previous;
};

struct node* create(int item) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode -> item = item;
    newNode -> next = NULL;
    newNode -> previous = NULL;
    return newNode;
}

struct node* add(struct node* head, int item) {
    struct node* newNode = create(item);
    newNode -> next = head;

    if(head != NULL){
        head -> previous = newNode;
    }
    return newNode;
}

// Preencha aqui
void print_linked_list(struct node* head);

int main(){
    struct node* head = NULL;

    head = add(head, 1);
    head = add(head, 2);
    head = add(head, 3);

    print_linked_list(head);

    free(head);
    return 0;
}