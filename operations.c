#include "monty.h"

/**
 * call_oper - executes called stack instructios
 * @stack: pointer to top node of a stack
 * @oper: string copy of stack instruction
 * @line: the current file line number calling instruction
 */

void call_oper(stack_t **stack, char *oper, unsigned int line)
{
	int c;
	instruction_t all_opers[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", div},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{"stack", stack},
		{"queue", queue},
		{NULL, NULL}
	};

	for (c = 0; all_opers[c].opcode != NULL; c++)
	{
		if (strcmp(oper, all_opers[c].opcode) == 0)
		{
			all_opers[c].f(stack, line);
			return;
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", line, oper);
	exit(EXIT_FAILURE);
}

/**
 *  add_node - this adds a new node to a circular linked list
 *  @stack: double pointer to the beginning of the circular linked list
 *  @n: value to add to the new node
 * Description: the function will add the node to the begining if in
 * stack mode and the end if in queue mode
 * Return: pointer to the new node, or NULL on failure
 */
stack_t *add_node(stack_t **stack, const int n)
{
	stack_t *new;

	if (stack == NULL)
		return (NULL);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*stack == NULL)
	{
		new->prev = new;
		new->next = new;
	}
	else
	{
		(*stack)->prev->next = new;
		new->prev = (*stack)->prev;
		(*stack)->prev = new;
		new->next = *stack;
	}
	if (var.len_queue == STACK || var.len_stack == 0)
		*stack = new;
	return (new);
}

/**
 * check_isdigit - checks string is only digit
 * @str: string input argument
 * Return: 0 is only digit or 1 not digit
 */

int check_isdigit(char *str)
{
	int c;

	for (c = 0; str[c]; c++)
	{
		if (str[c] == '-' && c == 0)
			continue;
		if (isdigit(str[c]) == 0)
			return (1);
	}
	return (0);
}
