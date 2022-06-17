#include "monty.h"

/**
 *  rotl - rotl rotates the stack to the top
 *  @stack: pointer to the top node of stack
 *  @line: the current file line number calling instruction
 */
void rotl(stack_t **stack, unsigned int line __attribute__ ((unused)))
{
	if (*stack)
		*stack = (*stack)->next;
}
