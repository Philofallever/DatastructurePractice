#pragma once
#include "common.h"
#define STACK_INIT_SIZE 100
#define STACK_INCREMENT 10

typedef struct Elemt
{
	int iValue;
	float fValue;
} Elemt;

typedef struct Stack
{
	Elemt * base;
	Elemt * top;
	int stack_size;
} Stack;

// init a empty stack
status initStack(Stack * pstack);

//destory a stack 
status destoryStack(Stack * pstack);

//clear a stack
status clearStack(Stack * pstack);

//is a empty stack
status isEmptyStack(Stack * pstack);

//return length of stack
int getStackLength(Stack * pstack);

//get top element of stack
status getTopElem(Stack * pstack,Elemt * e);

//push an element to stack
status push(Stack * pstack, Elemt e);

//pop top element from stack
status pop(Stack * pstack, Elemt * e);

//traverse a stack by use void * visit();
status traverse(Stack * pstack, void * visit());
