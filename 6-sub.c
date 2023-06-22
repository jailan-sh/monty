#include "monty.h"
/**
 * sub_ord-sub the top from the 2nd top then remove top.
 * @stack: head pointer to dlist
 * @line_number : line number
 * Return: void
 */
void sub_ord(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;
	int sub = 0;
	int num1, num2;
	int count = 0;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		free_monty();
		exit(EXIT_FAILURE);
	}
	num1 = (*stack)->n;
	num2 = (*stack)->next->n;
	sub = num2 - num1;
	pop_ord(stack, line_number);
	(*stack)->n = sub;
}
