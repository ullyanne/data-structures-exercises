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

struct node* remove(struct node* head, int item)
{
    struct node *current = head;
    while (current != NULL && current->item != item) 
        current = current->next;
        
    if (current == NULL) return head;
    if (head == current) {
        head = current->next;
    } else {
        // preencha aqui
    }
    
    if (current->next != NULL) {
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