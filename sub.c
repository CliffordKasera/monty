#include "monty.h"

/**
 *  sub - sub subtracts the top from the second top element
 *  @stack: pointer to the top node of stack
 *  @line: the current file line number calling instruction
 */
void sub(stack_t **stack, unsigned int line)
{
	int n;

	if (var.len_stack < 2)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	instruct_pop(stack, line);
	(*stack)->n -= n;
}
