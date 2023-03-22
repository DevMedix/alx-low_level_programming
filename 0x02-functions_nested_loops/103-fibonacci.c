#include "main.h"
#include <stdio.h>

int main(void)
{
	long int a = 0;
	long int b = 2;
	long int sum = a + b;
	long int limit = 4000000;

	while (a <= limit)
	{
		long int c = 4 * b + a;
		if (c > limit)
			break;
		a = b;
		b = c;
		sum += b;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
