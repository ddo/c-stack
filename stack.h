#include <stdbool.h>

#ifndef STACK_H
#define STACK_H

// change this to your item
typedef int item;
// or
// typedef unsigned int item;

typedef struct {
    int top;
    int size;
    item *data_array;
} stack;

// dynalic locate memory
// call free when done
stack* stack_create();

// util for debug
void stack_println();

// should call stack_is_full before push
bool stack_push();

// should call stack_is_empty before pop
// pop return 0 on empty
item stack_pop();

bool stack_is_full();
bool stack_is_empty();
void stack_make_empty();
int stack_len();

#endif