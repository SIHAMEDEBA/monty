#include "monty.h"
/**
 * addnode_f - add node to the head stk
 * 
 * @head: head of the stk
 * 
 * @n: neveau_valeur
 * Return: no return
*/
void addnode_f(stk_t **head, int n)
{

	stk_t *neveau_node, *aux;

	aux = *head;
	neveau_node = malloc(sizeof(stk_t));
	if (neveau_node == NULL)
	{ printf("erreur\n");
		exit(0); }
	if (aux)
		aux->prev = neveau_node;
	neveau_node->n = n;
	neveau_node->next = *head;
	neveau_node->prev = NULL;
	*head = neveau_node;
}
