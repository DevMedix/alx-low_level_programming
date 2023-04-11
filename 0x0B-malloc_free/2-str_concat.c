#include "main.h"
#include <stdlib.h>

int _strlen(char *str);
char *str_concat(char *s1, char *s2)
{
	char *ptr, *new_str;

	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);

	ptr = s1;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	new_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	ptr = new_str;

	while (*s1)
		*ptr++ = *s1++;
	
	while (*s2)
		*ptr++ = *s2++;

	*ptr = '\0';

	return (new_str);
}

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
