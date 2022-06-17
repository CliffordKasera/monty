#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: pointer to the top node of stack
 * @line: the current file line number calling instruction
 */
void pop(stack_t **stack, unsigned int line)
{
	stack_t *pop = *stack;

	if (var.len_stack == 0)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->prev = (*stack)->prev;
	(*stack)->prev->next = (*stack)->next;
	if (var.len_stack != 1)
		*stack = (*stack)->next;
	else
		*stack = NULL;
	free(pop);
	var.len_stack--;
}
