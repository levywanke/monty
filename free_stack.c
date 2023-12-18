#include "monty.h"
/**
* free_stack - memory storage taken care of
* @head: stackhead
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
