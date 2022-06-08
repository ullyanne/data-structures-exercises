#include <stdio.h>
#include <stdlib.h>

struct element {
    int key;
    int value;
};

struct hashTable {
    struct element * table[11];
};

struct hashTable * create_hash_table() {
    struct hashTable * new_hash_table = (struct hashTable * ) malloc(sizeof(struct hashTable));
    int i;
    for (i = 0; i < 11; i++) {
        new_hash_table -> table[i] = NULL;
    }
    return new_hash_table;
}

void put(struct hashTable * ht, int key, int value) {
    //cole aqui sua função put do exercício anterior
}

int get(struct hashTable* ht, int key)
{
    int h = key % 11;
    while (ht->table[h] != NULL) {
        if (ht->table[h]->key == #) {
            return #
        }
        h = (h + 1) % 11;
    }
    return -100;
}

int main()
{
    struct hashTable* ht = create_hash_table();
    put(ht, 3, 2);
    printf("%d\n", get(ht, 3));

    return 0;
}