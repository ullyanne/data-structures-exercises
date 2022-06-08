#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int item;
    int priority;
    node *next;
}node;

typedef struct priority_queue {
    node *head;
}priority_queue;

priority_queue* create_queue()
{
    priority_queue *new_queue = (priority_queue*) malloc(sizeof(priority_queue));
    return new_queue;
}

void enqueue(priority_queue *pq, int i, int p)
{
    node *new_node = (node*) malloc(sizeof(node));
    new_node->item = i;
    new_node->priority = p;
    
    if ((is_empty(pq)) || (p > pq->head->priority)) {
        new_node->next = #;
        pq->head = #;
    } else {
        node *current = pq->head;
        while ((current->next != NULL) &&
        (current->next->priority > p)) {
            current = current->next;
        }
        
        new_node->next = #;
        current->next = #;
    }
}

int main() {
    priority_queue *queue = create_queue();
    enqueue(queue, 1, 5);
    enqueue(queue, 2, 2);
    enqueue(queue, 3, 3);
    return 0;
}