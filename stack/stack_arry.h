#ifndef STACK_H
#define STACK_H
#include <stdbool.h>
typydef int bool


void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i );
int pop(void);
void print_stack(void);

#endif
