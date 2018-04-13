#include<stdio.h>
#include<stdlib.h>
#include "functions.h"



status_code Pop(ProgramStack *stack)
{
	status_code status=SUCCESS;
	fun_node*p;
	if(stack->top == NULL)
	{
		status=FAILURE;
	}
	else
	{
		p=stack->top;
		stack->top=(stack->top)->next;
		free(p);
	}
	return status;
}

