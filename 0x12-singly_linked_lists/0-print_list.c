#include "lists.h"

/*
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_ nelem;

	nelem= 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nill)");
		else
			printf("[%d] %s\n", 0, h->len, h->str);
		h = h->next;
		nelem++;
	}
	return (nelem);
}
