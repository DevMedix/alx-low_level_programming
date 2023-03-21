#include "main.h"
/**
 * _isalpha - Accepts a charcter argument c with the integer datatype
 * @c: accepts only single characters
 *
 * Return: 1 on success, 0 on no success
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
