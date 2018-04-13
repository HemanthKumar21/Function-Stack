#include<stdio.h>
#include<stdlib.h>
#include "functions.h"


int main()
{
	int exit=0,option,current_fn,called_fn,size=0;
	int max=0;
	status_code status;
	ProgramStack stck,*stack,lar_stack;
	stack=&stck;
	fun_node *ptr;
	InitializeStack(stack);
	InitializeStack(&lar_stack);
	printf("TITLE:PROGRAM STACK\n");
	do
	{
		printf("=====================================\n");
		printf("Option 1: Function Calling\n");
		printf("Option 2: Function returns\n");
		printf("Option 3: Exit\n");
		printf("======================================\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("Enter calling Function number\n");
				scanf("%d",&current_fn);
				printf("Enter Function number,to be called\n");
				scanf("%d",&called_fn);
				if(stack->top == NULL)
				{
					status=Push(stack,called_fn);
					size++;
				}
				
				else
				{
					if((stack->top)->fun_num == current_fn)
					{
						status=Push(stack,called_fn);
						size++;
					}
					else
					{
						printf("\nERROR;Current Function number is %d\n",(stack->top)->fun_num);
					}
				}
				
				
				
				if(status==SUCCESS)
				{
					
					printStack(stack);
					
				}
				
				else
				{
					printf("ERROR\n");
				}
				
				if(max < size)
				{
					max=size;
					lar_stack=duplicateStack(stck);
				}
				break;
				
			case 2:
				printf("Enter Funtion to be returned\n");
				scanf("%d",&current_fn);
				if((stack->top)==NULL)
				{
					printf("\nStack is Empty\n");
				}
				else
				{
					if((stack->top)->fun_num == current_fn)
					{
						status=Pop(stack);
						size--;
					}
					else
					{
						printf("\nERROR;Current Function is %d\n",(stack->top)->fun_num);
					}
				}
				if(status==SUCCESS)
				{
					printStack(stack);
				}
				else
				{
					printf("Error\n");
				}
				break;
			case 3:
				exit=1;
				stack=&lar_stack;
				printStack(reverseStack(stack));
				break;
			default:
				printf("INVALID OPTION\n");
				break;
		}
	}while(exit==0);
	return 0;
}
