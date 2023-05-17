#include "lists.h"


/**
 * listint_len - prints
 * @h: element
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
