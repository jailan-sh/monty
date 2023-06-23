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
	char *str = NULL;
	int count = 0;
	int i;
	(void) line_number;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	if (*stack == NULL)
	{
		printf("\n");
		return;
	}
	str = malloc(count + 1);
	if (str == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_monty();
		exit(EXIT_FAILURE);
	}

	for (i = 0; *stack != NULL && (*stack)->n > 0 && (*stack)->n >= 127; i++)
	{
		str[i] = (char)(*stack)->n;
		*stack = (*stack)->next;
	}
	str[i] = '\0';
	printf("%s\n", str);
	free(str);
}
