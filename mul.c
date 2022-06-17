#include "monty.h"

/**
 * mul - multiplies the second top with the top element
 * @stack: pointer to the top node of stack
 * @line: the current file line number calling instruction
 */
void mul(stack_t **stack, unsigned int line)
{
	int n;

	if (var.len_stack < 2)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	instruct_pop(stack, line);
	(*stack)->n *= n;
}
