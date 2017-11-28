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

status destoryStack(Stack * pstack)
{
	while (pstack->top!=pstack->base)
	{
		Elemt * temp = pstack->top;

	}
}

status clearStack(Stack * pstack)
{

}

status isEmptyStack(Stack * pstack)
{

	return pstack->base == pstack->top;
}

status getStackLength(Stack * pstack)
{
	return pstack->stack_size;
}

status getTopElem(Stack * pstack, Elemt * e)
{


}