#include "monty.h"
/**
 * fnc_pop - prints the top
 * @head: stk
 *  head
 * @counter: line_number
 * Return: no return
*/
void fnc_pop(stk_t **head, unsigned int counter)
{
	stk_t *he;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stk
        \n", counter);
		fclose(bus.file);
		free(bus.content);
		fr_stk(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	*head = he->next;
	free(he);
}
