#include "main.h"

/**
 *  swap - swaps the top two elements of the stack
 *  @stack: pointer to the top node of stack
 *  @line: the current file line number calling instruction
 */
void swap(stack_t **stack, unsigned int line __attribute__ ((unused)))
{
	stack_t *tmp;

	if (var.len_stack < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	if (var.len_stack == 2)
	{
		*stack = (*stack)->next;
		return;
	}
	tmp = (*stack)->next;
	tmp->prev = (*stack)->prev;
	(*stack)->prev->next = tmp;
	(*stack)->prev = tmp;
	(*stack)->next = tmp->next;
	tmp->next->prev = *stack;
	tmp->next = *stack;
	*stack = tmp;
}
