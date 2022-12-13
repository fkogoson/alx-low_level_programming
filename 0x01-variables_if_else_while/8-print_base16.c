#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	/* your code goes here */
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
