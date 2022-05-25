// Implemente a função printar lista encadeada

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

void print_linked_list(struct node* head)
{
    while (head != NULL) {
        printf("%d\n", #);
        // preenha aqui
     }
}

int main(){
    struct node* head = NULL;

    head = add(head, 1);
    head = add(head, 2);
    head = add(head, 3);
    
    print_linked_list(head);
    
    free(head);
    return 0;
}