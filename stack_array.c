#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

stack* stack_create(int size) {
    stack* s = malloc(sizeof(stack));
    if(s == NULL) {
        return NULL;
    }

    // create data array
    s->data_array = malloc(sizeof(int) * size);
    if(s->data_array == NULL) {
        return NULL;
    }

    s->top = 0;
    s->size = size;
    return s;
}

void stack_println(stack *s) {
    for(int i = 0; i < s->top; i++) {
        printf("%d ", s->data_array[i]);
    }

    printf("\n");
}

bool stack_is_full(stack *s) {
    return s->top == s->size;
}

bool stack_is_empty(stack *s) {
    return s->top == 0;
}

bool stack_push(stack *s, item data) {
    if(stack_is_full(s)) {
        return false;
    }

    s->data_array[s->top++] = data;
    return true;
}

item stack_pop(stack *s) {
    if(stack_is_empty(s)) {
        return 0;
    }

    return s->data_array[--s->top];
}

void stack_make_empty(stack *s) {
    s->top = 0;
    return;
}

int stack_len(stack *s) {
    return s->top;
}