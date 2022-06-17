#include "monty.h"

/**
 *  mod - the rest of the division of the second top by the top
 *  @stack: pointer to the top node of stack
 *  @line: the current file line number calling instruction
 */
void mod(stack_t **stack, unsigned int line)
{
	int n;

	if (var.len_stack < 2)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	instruct_pop(stack, line);
	if (n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line);
		exit(EXIT_FAILURE);
	}
	(*stack)->n %= n;
}
