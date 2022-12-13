#include <stdio.h>
/**
 * Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * You are not allowed to use any variable of type char
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar twice in your code
 * All your code should be in the main function
 */

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
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}