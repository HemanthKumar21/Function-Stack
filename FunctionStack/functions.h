typedef struct fun_node_tag
{
	int fun_num;
	struct fun_node_tag *next;
}fun_node;

typedef struct ProgramStack_tag
{
	fun_node *top;
}ProgramStack;

typedef enum{FAILURE,SUCCESS
}status_code;

fun_node *MakeFunNode(int fun_num);
void InitializeStack(ProgramStack *stack);
status_code Push(ProgramStack *stack,int fun_num);
status_code Pop(ProgramStack *stack);
ProgramStack duplicateStack(ProgramStack stack);
ProgramStack *reverseStack(ProgramStack *stack);
void printStack(ProgramStack *stack);
