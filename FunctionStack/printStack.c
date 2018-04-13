#include<stdio.h>
#include<stdlib.h>
#include "functions.h"

void printStack(ProgramStack *stack)
{
	fun_node *ptr;
	ptr=stack->top;
	while(ptr!=NULL)
	{
		printf("\t --------------- \n");
		
		printf("\t| %-10d    |\n",ptr->fun_num);
		
		
		ptr=ptr->next;
	}
	printf("\t --------------- \n");
}
