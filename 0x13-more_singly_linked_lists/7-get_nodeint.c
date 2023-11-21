#include "lists.h"
/**
  **get_nodeint_at_index - returns the nth node of a listint_t linked list
  *@head: pointer to struct
  *@index: index of the node
  *Return: pointer to nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0 ; a < index ; a++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
