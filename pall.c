#include "monty.h"

/**
 * pall - print this stack
 * @stack: stack givent by the main
 * @line_cnt: amount of this line
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	print_stack(*stack);
}
