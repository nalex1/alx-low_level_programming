#include "main.h"

/**
 * print_binary - prints a binary of an unsigned long int
 * @n: number to represent in binary
 * Return: null
 */

void print_binary(unsigned long int n)
{
	unsigned long int bitmask;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	bitmask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (bitmask != 0)
	{
		if ((n & bitmask) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}

		bitmask >>= 1;
	}
}
