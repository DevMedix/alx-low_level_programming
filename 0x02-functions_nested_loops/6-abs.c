#include "main.h"

int _abs(int a)
{
	int result;

	if (a >= 0)
		result = a;
	else if (a < 0)
		result = -a;
	return (result);
}
