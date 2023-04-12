#include <stdlib.h>
#include <string.h>

/**
 * _memcpy - fills memory with a constant byte.
 * @dest: memory area destination
 * @src: memory area source
 * @n: number of memory bytes to copy
 *
 * Return: returns the memory area destination (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *new_dest;

	const char *new_src;

	if (dest == NULL || src == NULL)
		return (NULL);

	new_dest = (char *)dest;

	new_src = (const char *)src;

	if (new_dest <= new_src || new_dest >= new_src + n)
	{
		while (n--)
		{
			*new_dest++ = *new_src++;
		}
	}
	else
	{
		new_dest += n - 1;

		new_src += n - 1;

		while (n--)
		{
			*new_dest-- = *new_src--;
		}
	}

	return (dest);
}

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: returns a pointer to a newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1, len_s2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);

	len_s2 = strlen(s2);

	ptr = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	_memcpy(ptr, s1, len_s1);

	_memcpy(ptr + len_s1, s2, len_s2 + 1);

	return (ptr);
}
