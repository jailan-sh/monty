#include "monty.h"

/**
 * get_function - toget the function according to order given
 * @s : the command
 *
 * Return: 0 always success
 */

int get_function(char *s)
{
	int i = 0;
	instruction_t order[] = {
		 {"push", push_ord},
		 {"pall", pall_ord},
		 {"pint", pint_ord},
		 {"nop", nop_ord},
		 {"pop", pop_ord},
		 {"swap",swap_ord},
		 {"sub",sub_ord},
		 {"add", add_ord},
		 {"div", div_ord},
		 {"mul", mul_ord},
		 {NULL, NULL}
	};
	for (i = 0; order[i].opcode != NULL && s != NULL; i++)
	{
		if (strcmp(order[i].opcode, s) == 0)
		{
			order[i].f(&(glob.head), glob.line_number);
			return (0);
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", glob.line_number, s);
		exit(EXIT_FAILURE);
}
