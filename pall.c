#include "monty.h"

/**
 * f_pall - makes the stack obey print command
 * @head: head of stack
 * @counter: --
 * Return: null
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;
	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
