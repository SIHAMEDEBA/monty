#include "monty.h"
/**
 * fnc_divides - dividesides the top two elmts of the stk
 * .
 * @head: stk
 *  head
 * @counter: line_number
 * Return: no return
*/
void fnc_divides(stk_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't divides, stk
         too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		fr_stk(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	if (he->n == 0)
	{
		fprintf(stderr, "L%d: dividesision by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		fr_stk(*head);
		exit(EXIT_FAILURE);
	}
	aux = he->next->n / he->n;
	he->next->n = aux;
	*head = he->next;
	free(he);
}
