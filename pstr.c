#include "monty.h"

/**
 *  pstr - prints the string starting at the top of the stack
 *  @stack: pointer to the top node of stack
 *  @line: the current file line number calling instruction
 */
void pstr(stack_t **stack, unsigned int line __attribute__ ((unused)))
{
	stack_t *tmp;
	int ch;

	tmp = *stack;

	while (tmp != NULL)
	{
		ch = tmp->n;
		if (!isascii(ch) || ch == 0)
			break;
		putchar(ch);
		tmp = tmp->next;
		if (tmp == *stack)
			break;
	}
	putchar('\n');
}
