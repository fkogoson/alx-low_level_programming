#include "main.h"

/**
 * main -  checks for lowercase character
 *
 * Return: Always 0
 */

int _islower(int c)
{
	int r;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
