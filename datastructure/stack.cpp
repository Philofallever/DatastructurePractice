#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

status initStack(Stack * pstack)
{
	pstack->base = (Elemt *)malloc(STACK_INIT_SIZE * sizeof(Elemt));
	if (pstack->base == nullptr)
	{
		exit(OVERFLOW);
	}
	else
	{
		pstack->top = pstack->base;
		pstack->stack_size = STACK_INIT_SIZE;
		return OK;
	}	
}

//release all memory that pstack->base point to.
status destoryStack(Stack * pstack)
{
	pstack->top = nullptr;
	free(pstack->base);
	pstack->base = nullptr;
	free(pstack);                                                                                                   
	pstack = nullptr;
	return OK;
}

//clear the Stack
status clearStack(Stack * pstack)
{
	pstack->top = pstack->base;
	return OK;
}

status isEmptyStack(Stack * pstack)
{

	return pstack->base == pstack->top;
}

status getStackLength(Stack * pstack)
{
	return pstack->top - pstack->base;
}

status getTopElem(Stack * pstack, Elemt * e)
{
	if (pstack->top == pstack->base)
	{
		return ERROR;
	}
	else
	{
		*e = *(pstack->top -1);
		//e->iValue = (pstack->top - 1)->iValue;
		//e->fValue = (pstack->top - 1)->fValue;
	}
}

status push(Stack * pstack,Elemt e)
{

	if (pstack->top - pstack->base > STACK_INIT_SIZE)
	{
		pstack->base = (Elemt *)realloc(pstack->top, (pstack->stack_size + STACK_INCREMENT) * sizeof(Elemt));
		if (pstack->base == NULL)
		{
			exit(OVERFLOW);
		}
		else
		{
			pstack->top = pstack->base + STACK_INCREMENT;
			pstack->stack_size = STACK_INIT_SIZE + STACK_INCREMENT;
		}
	}
	*(pstack->top) = e;
	(pstack->top)++;
	return OK;
}

status pop(Stack * pstack, Elemt * e)
{
	if (pstack->top == pstack->base)
	{
		return ERROR;
	}
	else
	{
		*e =  *(-- pstack->top);
		return OK;
	}
}
