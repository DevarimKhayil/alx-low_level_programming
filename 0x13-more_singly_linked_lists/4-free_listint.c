#include "lists.h"
/**
  *free_listint - frees struct mem
  *@head: pointer to struct
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
