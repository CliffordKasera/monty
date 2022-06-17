#include "monty.h"

/**
 *  add - adds the top two elements of the stack
 *  @stack: pointer to the top node of stack
 *  @line: the current file line number calling instruction
 */
void add(stack_t **stack, unsigned int line)
{
	int n = 0;

	if (var.len_stack < 2)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	n += (*stack)->n;
	instruct_pop(stack, line);
	(*stack)->n += n;
}
