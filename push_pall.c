#include "main.h"

/**
 *  push - pushes data to stack
 *  @stack: pointer to the top node of stack
 *  @line: the current file line number calling instruction
 */
void push(stack_t **stack, unsigned int line)
{
	char *str;
	int num;

	str = strtok(NULL, "\n\t\r ");

	if (str == NULL || check_isdigit(str))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line);
		exit(EXIT_FAILURE);
	}
	num = atoi(str);
	if (!add_node(stack, num))
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	var.len_stack++;
}

/**
 * pall - prints all of the data in the stack
 * @stack: pointer to the top node of stack
 * @line: the current file line number calling instruction
 */
void pall(stack_t **stack, unsigned int line)
{
	stack_t *head;
	(void) line;

	head = *stack;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		if (head == *stack)
			return;
	}
}
