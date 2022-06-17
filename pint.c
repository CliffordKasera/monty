#include "monty.h"

/**
* pint - prints the value at the top of the stack
* @stack: pointer to the top node of stack
* @line: the current file line number calling instruction
*/
void pint(stack_t **stack, unsigned int line)
{
	stack_t *head = *stack;
	if (var.len_stack == 0)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}
