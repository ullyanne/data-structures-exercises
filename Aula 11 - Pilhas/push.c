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

void push(struct stack* stack, int item)
{
    if (stack->current_size == MAX_STACK_SIZE) {
        printf("Stack overflow");
    } else {
        // preencha aqui
    }
}

int main(){
    struct stack* stack = create_stack();

    push(stack, 4);
    push(stack, 3);

    return 0;
}