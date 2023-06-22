#include "monty.h"
/**
 * div_ord-sub the top from the 2nd top then remove top.
 * @stack: head pointer to dlist
 * @line_number : line number
 * Return: void
 */
void div_ord(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;
	int div;
	int num1, num2;
	int count = 0;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		free_monty();
		exit(EXIT_FAILURE);
	}
	num1 = (*stack)->n;
	if (num1 == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free_monty();
		exit(EXIT_FAILURE);
	}
	num2 = (*stack)->next->n;
	div = num2 / num1;
	pop_ord(stack, line_number);
	(*stack)->n = div;
}
