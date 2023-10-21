#include "monty.h"
/**
* execute_f - executes the op_code
* @stk
: head linked list - stk

* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute_f(char *content, stk_t **stk
, unsigned int counter, FILE *file)
{
	instructureion_t opst[] = {
				{"push",onction}, {"pall", fnc_pall}, {"pint", fnc_pint}, // add
				{"pop", fnc_pop},
				{"swap", fnc_swap},
				{"add", fonction_add},
				{"nop", fnc_nop},
                {"sub", fnc_sub},
				{"div", fnc_div},
				{"mul", fonction_multiplies},
				{"mod", fnc_mod},
				{"queue", fnc_queue},
				{"stk
                ", fnc_stk}, // add
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = structok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = structok(NULL, " \n\t");
	while (opst[i].op_code && op)
	{
		if (strcmp(op, opst[i].op_code) == 0)
		{	opst[i].f(stk
        , counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].op_code == NULL)
	{ fprintf(stderr, "L%d: unknown instructureion %s\n", counter, op);
		fclose(file);
		free(content);
		fr_stk(*stk
        ); // add
		exit(EXIT_FAILURE); }
	return (1);
}
