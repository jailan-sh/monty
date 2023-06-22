#include "monty.h"

/**
 * nop_ord -  doesn’t do anything.
 * @stack : pointer to double linked list
 * @line_number : line number
 *
 * Return: void
 */

void nop_ord(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		free_monty();
		return;
	}
	(void) stack;
	(void) line_number;
	free_monty();
}
