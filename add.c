#include "monty.h"
/**
 * fonction_add -  top two elements of the stk
 * .
 * @head: stk
 *  head
 * @counter: line_number
 * Return: no return
*/
void fonction_add(stk_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stk
         too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		fr_stk(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	aux = he->n + he->next->n;
	he->next->n = aux;
	*head = he->next;
	free(he);
}
