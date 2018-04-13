#include<stdio.h>
#include<stdlib.h>
#include "functions.h"



ProgramStack duplicateStack(ProgramStack stack)
{
	ProgramStack stk;
	fun_node *p,*ptr;
	InitializeStack(&stk);
	while(stack.top!=NULL)
	{
		p=stack.top;
		ptr=MakeFunNode(p->fun_num);
		ptr->next=stk.top;
		stk.top=ptr;
		stack.top=(stack.top)->next;
	}
	return stk;
}

