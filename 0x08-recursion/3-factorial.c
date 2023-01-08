#include "main.h"

/**
 *factorial - finds the factorial
 *@n- integer to find then factorial
 *return: returns an integer
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
