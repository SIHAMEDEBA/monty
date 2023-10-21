#include "monty.h"
/**
 * fnc_pall - prints the stk
 * 
 * @head: stk
 *  head
 * @counter: no used
 * Return: no return
*/
void fnc_pall(stk_t **head, unsigned int counter)
{
	stk_t *he;
	(void)counter;

	he = *head;
	if (he == NULL)
		return;
	while (he)
	{
		printf("%d\n", he->n);
		he = he->next;
	}
}
