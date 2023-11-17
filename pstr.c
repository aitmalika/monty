#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pstr - print this content of a stack_t stack a string
 * @stack: stack the given by main
 * @line_cnt: lines counter for this error message
 *
 * Return: nothings
 */
void pstr(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	stack_t *current = *stack;

	while (current)
	{
		if (current->n <= 0 || current->n > 127)
			break;
		putchar((char) current->n);
		current = current->next;
	}
	putchar('\n');
}
