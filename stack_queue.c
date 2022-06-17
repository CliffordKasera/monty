#include "monty.h"

/**
 *  queue - sets the format of the data to a queue (FIFO)
 *  @stack: double pointer to the top of the stack
 *  @line: script line number
 */
void queue(stack_t **stack, unsigned int line)
{
	(void) stack;
	(void) line;

	var.len_queue = QUEUE;
}

/**
 * stack - sets the format of the data to a stack (LIFO)
 * @stack: double pointer to the top of the stack
 * @line: script line number
 */
void stack(stack_t **stack, unsigned int line)
{
	(void) stack;
	(void) line;

	var.len_queue = STACK;
}
