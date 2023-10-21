#include "monty.h"
/**
  *fnc_sub- sustration
  *@head: stk
   head
  *@counter: line_number
  *Return: no return
 */
void fnc_sub(stk_t **head, unsigned int counter)
{
	stk_t *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stk
         too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		fr_stk(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
