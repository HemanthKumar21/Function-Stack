#include<stdio.h>
#include<stdlib.h>
#include "functions.h"

ProgramStack *reverseStack(ProgramStack *stack)
{
	fun_node *tail,*mid,*head;
	head=stack->top;
	mid=NULL;
	while(head!=NULL)
	{
		tail=mid;
		mid=head;
		head=head->next;
		mid->next=tail;
	}
	stack->top=mid;
	return stack;
}

