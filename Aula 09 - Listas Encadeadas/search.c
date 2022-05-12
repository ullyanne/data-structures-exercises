// Implemente a função procurar item em lista encadeada

#include <stdio.h>
#include <stdlib.h>

struct node {
    int item;
    struct node* next;
};

struct node* create(int item) {
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode -> item = item;
    newnode -> next = NULL;
    return newnode;
}

struct node* add(struct node* head, int item) {
    struct node* newnode = create(item);
    newnode -> next = head;
    return newnode;
}

// Preencha aqui
struct node* search(struct node* head, int item);

int main(){
    struct node* head = NULL;

    head = add(head, 1);
    head = add(head, 2);
    head = add(head, 3);
    
    search(head, 2);
    
    free(head);
    return 0;
}