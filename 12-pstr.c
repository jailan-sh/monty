#include "monty.h"
/**
 * pstr_ord - prints the string at the top of the stack, followed by a new line
 * @stack: head pointer to dlist
 * @line_number : line number
 *
 * Return: void
 */

void pstr_ord(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (*stack == NULL)
	{
		printf("\n");
		return;
	}
	while (*stack)
	{
		if ((*stack)->n >= 32 && (*stack)->n <= 127)
			printf("%c", (*stack)->n);
		else
			break;
		*stack = (*stack)->next;
	}
	printf("\n");
}
