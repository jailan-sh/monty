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
	stack_t *ptr = *stack;
	int i;
	(void) line_number;

	while (ptr)
	{
		i = ptr->n;
		if (i < 0 || i > 127)
			break;
		printf("%c", i);
		ptr = ptr->next;
	}
	printf("\n");
}
