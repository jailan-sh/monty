#include "monty.h"
/**
 * pchar_ord- prints the value at the top of the stack, followed by a new line
 * @stack: head pointer to dlist
 * @line_number : line number
 * Return: void
 */
void pchar_ord(stack_t **stack, unsigned int line_number)
{
	char str;

	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		free_monty();
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n <= 0 || (*stack)->n >= 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		free_monty();
		exit(EXIT_FAILURE);
	}
	str = (char)(*stack)->n;
	printf("%c\n", str);
}
