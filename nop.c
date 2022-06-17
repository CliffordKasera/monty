#include "main.h"

/**
 *  nop - nop doesn’t do anything
 *  @stack: pointer to the top node of stack
 *  @line: the current file line number calling instruction
 */
void nop(stack_t **stack __attribute__ ((unused)), unsigned int line)
{
	(void) line;
}
