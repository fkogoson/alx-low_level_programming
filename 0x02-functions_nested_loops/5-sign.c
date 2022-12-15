#include "main.h"
/**
 * main -  prints the sign of a number
 *
 * Return: Always 0
 */

int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-1');
	}
}
