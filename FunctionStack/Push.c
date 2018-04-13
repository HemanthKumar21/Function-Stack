#include<stdio.h>
#include<stdlib.h>
#include "functions.h"



status_code Push(ProgramStack *stack,int fun_num)
{
	fun_node *p;
	status_code status=SUCCESS;
	p=MakeFunNode(fun_num);
	if(p==NULL)
	{
		status=FAILURE;
	}
	else
	{
		p->next=stack->top;
		stack->top=p;
	}
	return status;
}
