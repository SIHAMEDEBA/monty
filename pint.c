#include "monty.h"
/**
 * fonction_pint- prints the top
 * @head: stk
 *  head
 * @counter: line_number
 * Return: no return
*/
void fnc_pint(stk_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stk
         empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		fr_stk(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
