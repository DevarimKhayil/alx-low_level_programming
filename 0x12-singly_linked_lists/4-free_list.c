#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *free_list - frees a list_t list
  *@head: pointer to structure
  *Return: void
  */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
