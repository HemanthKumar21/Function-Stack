#include<stdio.h>
#include<stdlib.h>
#include "functions.h"



fun_node *MakeFunNode(int fun_num)
{
	fun_node *p;
	p=(fun_node *)malloc(sizeof(fun_node));
	p->fun_num=fun_num;
	p->next=NULL;
	return p;
}
