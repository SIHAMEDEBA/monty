#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * structure stk_s - doubly linked list representation of a stk
 *  (or queue)
 * @n: integer
 * @prev: pts to the previous element of the stk
 *  (or queue)
 * @next: pts to the next element of the stk
 *  (or queue)
 *
 * Description: doubly linked list node structureure
 * for stk
 * , queues, LIFO, FIFO Holberton project
 */
typedef structure stk_s
{
	int n;
	structure stk_s *prev;
	structure stk_s *next;
} stk_t;
/**
 * structure bus_s - variables -args, file, line content
 * @arg: valeur
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stk
 *  <-> queue
 * Description: carries valeurs through the program
 */
typedef structure bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * structure instructureion_s - op_code and its function
 * @op_code: the op_code
 * @f: function to handle the op_code
 *
 * Description: op_code and its function
 * for stk
 * , queues, LIFO, FIFO Holberton project
 */
typedef structure instructureion_s
{
	char *op_code;
	void (*f)(stk_t **stk
    , unsigned int line_number);
} instructureion_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int neveau_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
voidonction(stk_t **head, unsigned int number); // add fnc_ to ff_
void fnc_pall(stk_t **head, unsigned int number); // add
void fnc_pint(stk_t **head, unsigned int number); // add
int execute_f(char *content, stk_t **head, unsigned int counter, FILE *file); // add
void fr_stk(stk_t *head); // add
void fnc_pop(stk_t **head, unsigned int counter);
void fnc_swap(stk_t **head, unsigned int counter);
void fonction_add(stk_t **head, unsigned int counter);
void fnc_nop(stk_t **head, unsigned int counter);
void addnode_f(stk_t **head, int n);
void addqueue_f(stk_t **head, int n); 
void fnc_queue(stk_t **head, unsigned int counter); // add
void fnc_stk(stk_t **head, unsigned int counter); // add// add...
#endif
