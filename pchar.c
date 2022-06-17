#include "main.h"

/**
 *  pchar - prints the char at the top of the stack
 *  @stack: pointer to the top node of stack
 *  @line: the current file line number calling instruction
 */
void pchar(stack_t **stack, unsigned int line)
{
	int ch;

	if (var.len_stack < 1)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
	ch = (*stack)->n;
	if (!isascii(ch))
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ch);
}
