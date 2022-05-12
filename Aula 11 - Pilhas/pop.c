// Implemente a função pop para pilha

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node* next;
};

struct stack
{
    struct node* top;
};

struct stack* create_stack(){
    struct stack* new_stack = (struct stack*) malloc(sizeof(struct stack));
    new_stack -> top = NULL;
    return new_stack;
}

// Preencha aqui

int pop(struct stack* stack);

int main(){
    struct stack* stack = create_stack();

    push(stack, 4);
    push(stack, 3);
    pop(stack);

    return 0;
}