#include "main.h"
/**
 * _islower -> checks if the character is lower case
 *
 * @ch: character augment
 *
 * Return: return 1 if satisfies the condition, else 0
 */
int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
