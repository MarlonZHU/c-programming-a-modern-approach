#include<stdio.h>
#include <stdlib.h>
#include "stack_array.h"
#include <stdbool.h>

bool is_empty(void);
static void terminate(const char *message);

struct node {
	int data;
	struct node *next;
};

static struct node *top = NULL;

static void terminate(const char *message)
{
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}
void make_empty(void)
{
	while(!is_empty())
		pop();
}

void print_stack(void)
{
	struct node *temp = top;
	for(;temp!=NULL;temp=temp->next)
		printf("%d\n", temp->data);
	printf("\n");
}
bool is_empty(void)
{
	return top==NULL;
}

bool is_full(void)
{
	return false;
}

void push(int value)
{
	struct node *new_node = malloc(sizeof(struct node));
	new_node->data = value;
	new_node->next = top;
	top = new_node;
}

int pop(void)
{
	if(is_empty())
	{
		terminate("Error in pop: stack is empty.");
	}
	
	struct node *poped = top;
	int i= top->data;
	top = top->next;
	free(poped);
	return i;
}


int main()
{
	print_stack();
	push(1);
	print_stack(); 
	push(2);
	push(20);
	print_stack(); 
	
	return 0;
}
