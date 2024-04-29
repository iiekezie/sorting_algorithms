#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "deck.h"

int compare_cards(const void *a, const void *b) {
    const card_t *card_a = (*(deck_node_t **)a)->card;
    const card_t *card_b = (*(deck_node_t **)b)->card;

    if (card_a->kind != card_b->kind) {
        return (int)(card_a->kind) - (int)(card_b->kind);
    } else {
        return strcmp(card_a->value, card_b->value);
    }
}

void sort_deck(deck_node_t **deck) {
    size_t size = 0;
    deck_node_t *current = *deck;
    deck_node_t **arr = NULL;

    while (current) {
        size++;
        current = current->next;
    }

    arr = malloc(size * sizeof(deck_node_t *));
    if (!arr) {
        return;
    }

    current = *deck;
    for (size_t i = 0; i < size; i++) {
        arr[i] = current;
        current = current->next;
    }

    qsort(arr, size, sizeof(deck_node_t *), compare_cards);

    for (size_t i = 0; i < size - 1; i++) {
        arr[i]->next = arr[i + 1];
        arr[i + 1]->prev = arr[i];
    }
    arr[size - 1]->next = NULL;
    *deck = arr[0];

    free(arr);
}
