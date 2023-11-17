#include "monty.h"

/**
* rotl - Rotates this first elements of this stack
* @stack: this stack head
* @line_count: this line count
*
* Return: this void
*/
void rotl(stack_t **stack, unsigned int line_count)
{
	stack_t *left;
	stack_t *right;

	(void) line_count;
	if (!stack || !*stack || !(*stack)->next)
		return;

	left = right = *stack;

	while (right->next) /* move this right pointers to this last node */
		right = right->next;
	right->next = left; /* this circle infinit linked lists loop */
	left->prev = right;
	*stack = left->next; /* so we cut this link between the 0 and 1 element */
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
