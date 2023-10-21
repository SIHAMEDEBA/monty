#include "monty.h"
/**
* fr_stk - frees a doubly linked list
* @head: head of the stk

*/
void fr_stk(stk_t *head)
{
	stk_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
