#include <stdio.h>
#include <stdlib.h>
#include "stack_adt.h"
#define STACK_SIZE 100
//typedef struct stack_type *Stack;

/*
		top-> 	here is top, there are nothing
				addr: 3; value: 30
				addr: 2; value: 20		
				addr: 1; value: 10
				addr: 0; value: 1	//if top ptr here, means it's empty
*/

struct stack_type{
	Item content[STACK_SIZE];
	int top;
};

void terminate(const char* message)
{
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

Stack create(void)
{
	Stack new_stack = malloc(sizeof(struct stack_type));
	if (new_stack == NULL)
		terminate("Error in create: stack could not be created.");
	new_stack->top = 0;
	return new_stack;	
}

void destroy(Stack s)
{
	free(s);
}

void make_empty(Stack s)
{
	s->top = 0;
}

bool is_empty(Stack s)
{
	return s->top == 0;
}

bool is_full(Stack s)
{
	return s->top == STACK_SIZE;
}

void push(Stack s, Item i)
{
	if (is_full(s))
		terminate("Error in push: stack is full.\n");
	(s->content)[s->top++] = i;	
}

Item pop(Stack s)
{
	if (is_empty(s))
		terminate("Error in pop: stack is empty.\n");
	return (s->content)[--(s->top)];
}
