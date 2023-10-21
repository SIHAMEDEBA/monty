#include "monty.h"
/**
 * fonction_multiplies - multiplies the top two elements of the stk
 * .
 * @head: stk
 *  head
 * @counter: line_number
 * Return: no return
*/
void fonction_multiplies(stk_t **head, unsigned int counter)
{
	stk_t *he;
	int len = 0, aux;

	he = *head;
	while (he)
	{
		he = he->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stk
         too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		fr_stk(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	aux = he->next->n * he->n;
	he->next->n = aux;
	*head = he->next;
	free(he);
}
