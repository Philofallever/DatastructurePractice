#include <stdio.h>
#include "stack.h"


/*stack smoke test*//*
int main(void)
{
	Stack teststack;
	Stack * pstack = &teststack;
	status test_status;
	//init
	test_status = initStack(pstack);
	printf("after init test_stauts = %d\n", test_status);
	printf("after init is empty stack = %d\n", isEmptyStack(pstack));
	printf("after init stack length = %d\n", getStackLength(pstack));

	Elemt emt1 = { 1,1.0 };
	push(pstack, emt1);
	printf("after push emt1 is empty stack = %d\n", isEmptyStack(pstack));
	printf("after push emt1 stack length = %d\n", getStackLength(pstack));

	Elemt emt2 = { 2,2.0 };
	push(pstack, emt2);
	printf("after push emt2 is empty stack = %d\n", isEmptyStack(pstack));
	printf("after push emt2 stack length = %d\n", getStackLength(pstack));

	Elemt emt3;
	getTopElem(pstack, &emt3);
	printf("get top elememt emt3: %d %f\n", emt3.iValue, emt3.fValue);
	puts("====pop stack test ====");
	Elemt emt4;
	pop(pstack, &emt4);
	printf("stacklength = %d\n", getStackLength(pstack));
	printf("emt4: %d %f\n", emt4.iValue, emt4.fValue);
	puts("=====test over!====");
}
*/





