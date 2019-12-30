#include<stdio.h>
#include<stdlib.h>
#include "stack_arry.h"

#define STACK_SIZE 100
/*
 *top always empty	top->null
			     value 3
			     value 2
 *			     value 1
 *	   	     bottom  value 0
 * */
static int contents[STACK_SIZE];
static int top = 0;
//since top should not be access from outside;

void print_stack(void)
{	
	printf("i:\tvalue\n");
	int top_copy=top;
	top_copy--; /**/
	for(; top_copy>0; top_copy--)
	printf("%d:\t%d\n", top_copy, contents[top_copy]);
	printf("\n");
}

void make_empty(void)
{
	top=0;
}
bool is_full(void)
{
	return top==STACK_SIZE;
}
bool is_empty(void)
{
	return top==0;
}

void push(int i)
{
	if (is_full())
	{
		printf("Stack full\n");
		return;
	}
	contents[top++] = i;
}
int pop(void)
{
	if (is_empty())
	{
		printf("Stack empty!");
		return;
	}
	return contents[--top];
}
int main()
{	
	print_stack();
	pop();
	push(1);
	puth(2);
	print_stack();
	pop();
	print_stack();
	return 0;
}
