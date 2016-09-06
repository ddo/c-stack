#include <stdio.h>

#include "stack.h"

void stack_init(stack *s) {
    s->top = 0;
}

void stack_println(stack *s) {
    for(int i = 0; i < s->top; i++) {
        printf("%d ", s->data_array[i]);
    }

    printf("\n");
}

bool stack_is_full(stack *s) {
    return s->top == STACK_MAX_LENGTH;
}

bool stack_is_empty(stack *s) {
    return s->top == 0;
}

bool stack_push(stack *s, int data) {
    if(stack_is_full(s)) {
        return false;
    }

    s->data_array[s->top++] = data;
    return true;
}

int stack_pop(stack *s) {
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