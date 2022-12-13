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

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
