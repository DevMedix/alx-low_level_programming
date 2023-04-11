#include <stdlib.h>
#include "main.h"

int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char *_strcpy(char *dest, char *src)
{
	char *ptr;

	ptr = dest;

	while (*src != '\0')
	{
			*dest++ = *src++;
	}
	*dest = '\0';
	return (ptr);
}


char *_strdup(char *str)
{
	char *pr;

	if (str == NULL)
		return (NULL);

	pr = (char *)malloc((_strlen(str) + 1) * sizeof(char));

	if (pr == NULL)
		return (NULL);

	_strcpy(pr, str);

	return (pr);
}
