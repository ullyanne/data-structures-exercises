// Implemente a função remover item de lista encadeada

#include <stdio.h>
#include <stdlib.h>

struct node {
    int item;
    struct node* next;
};

struct node* create(int item) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode -> item = item;
    newNode -> next = NULL;
    return newNode;
}

struct node* add(struct node* head, int item) {
    struct node* newNode = create(item);
    newNode -> next = head;
    return newNode;
}

struct node* remove(struct node *head, int item)
{
    struct node *previous = NULL;
    struct node *current = head;

    while (current != NULL && current->item != item) {
        // preencha aqui
    }

    if (current == NULL) {
        return head;
    } if (previous == NULL) {
        // preenha aqui
    } else {
        // preencha aqui
    }

    free(current);
    return head;
}

int main(){
    struct node* head = NULL;

    head = add(head, 1);
    head = add(head, 2);
    head = add(head, 3);
    
    remove(head, 2);
    
    free(head);
    return 0;
}