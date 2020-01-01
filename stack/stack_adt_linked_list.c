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
struct node {
	Item value;
	struct node *next;
};

struct stack_type{
	struct node *top;
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
	new_stack->top = NULL;
	return new_stack;	
}

void destroy(Stack s)
{
	free(s);
}

void make_empty(Stack s)
{
	s->top = NULL;
}

bool is_empty(Stack s)
{
	return s->top == NULL;
}

bool is_full(Stack s)
{
	return false;
//	return s->top == STACK_SIZE;
}

void push(Stack s, Item i)
{
	struct node *new_node = malloc(sizeof(struct node));
	if (new_node==NULL)
		terminate("Error in push: stack is full.\n");
	
	new_node->value = i;
	new_node->next = s->top;
	s->top = new_node;
}

Item pop(Stack s)
{
	struct node *old_top;
	Item value;
	if (is_empty(s))
		terminate("Error in pop: stack is empty.\n");
	
	old_top = s->top;
	value = old_top->value;
	
	s->top = old_top->next;
	free(old_top);
	return value;
}

//main()
//{
//	
//}
