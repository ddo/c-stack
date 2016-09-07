#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

void debug(stack *s) {
    printf("--------------\n");

    printf("%p\n", s);
    printf("full\t:%s\n", stack_is_full(s) ? "true" : "false");
    printf("empty\t:%s\n", stack_is_empty(s) ? "true" : "false");
    printf("len\t:%d\n", stack_len(s));

    printf("--------------\n");
}

int main() {
    stack* s = stack_create(5);

    debug(s);
    printf("push\n");

    printf("push: %s\n", stack_push(s, 1) ? "true" : "false");
    stack_println(s);
    printf("push: %s\n", stack_push(s, 2) ? "true" : "false");
    stack_println(s);
    printf("push: %s\n", stack_push(s, 3) ? "true" : "false");
    stack_println(s);
    printf("push: %s\n", stack_push(s, 4) ? "true" : "false");
    stack_println(s);
    printf("push: %s\n", stack_push(s, 5) ? "true" : "false");
    stack_println(s);
    printf("push: %s\n", stack_push(s, 6) ? "true" : "false");
    stack_println(s);

    debug(s);
    printf("pop\n");

    printf("pop: %d\n", stack_pop(s));
    stack_println(s);
    printf("pop: %d\n", stack_pop(s));
    stack_println(s);
    printf("pop: %d\n", stack_pop(s));
    stack_println(s);

    debug(s);
    printf("make empty\n");
    stack_make_empty(s);

    debug(s);
    free(s);
    
    return 0;
}