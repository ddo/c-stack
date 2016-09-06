#include <stdbool.h>

#ifndef STACK_H
#define STACK_H

#define STACK_MAX_LENGTH 5

typedef struct stack {
    int top;
    int data_array[STACK_MAX_LENGTH];
} stack;

void stack_init();
void stack_println();
bool stack_push();

// should call is empty before pop
// pop return 0 on empty
int stack_pop();

bool stack_is_full();
bool stack_is_empty();
void stack_make_empty();
int stack_len();

#endif