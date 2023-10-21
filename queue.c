#include "monty.h"
/**
 * fnc_queue - prints the top
 * @head: stk
 *  head
 * @counter: line_number
 * Return: no return
*/
void fnc_queue(stk_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue_f - add node to the tail stk
 * 
 * @n: neveau_valeur
 * @head: head of the stk
 * 
 * Return: no return
*/
void addqueue_f(stk_t **head, int n)
{
	stk_t *neveau_node, *aux;

	aux = *head;
	neveau_node = malloc(sizeof(stk_t));
	if (neveau_node == NULL)
	{
		printf("erreur\n");
	}
	neveau_node->n = n;
	neveau_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = neveau_node;
		neveau_node->prev = NULL;
	}
	else
	{
		aux->next = neveau_node;
		neveau_node->prev = aux;
	}
}
