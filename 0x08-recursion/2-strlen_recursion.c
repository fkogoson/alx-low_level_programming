#include "main.h"

/**
 *_strlen_recursion - function to return length of a string
 *
 *@s: string to return the length
 *Return: Always an integer
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
