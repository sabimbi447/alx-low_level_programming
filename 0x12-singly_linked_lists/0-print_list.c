#include <stdio.h>

#include "lists.h"

/**
  * print_list - Prints all eleements of a list
  * @h: list to be printed
  *
  * Return: Number of nodes
  */


size_t print_list(const list_t *h)
{
	size_t noed = 0;

	while(h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n,",h->len, h->str);
		noed++;
		h = h->next;
	}

	return (noed);
}

