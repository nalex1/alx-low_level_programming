#include "main.h"

/**
 * binary_to_uint - converts from binary to unsigned integer
 * @b: pointer to binary string
 *
 * Return: binary output
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a;

	if (b == NULL)
		return (0);
	a = 0;

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			a = a << 1;
			a = a + (*b - '0');
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (a);
}
