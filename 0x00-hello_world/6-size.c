#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;
	int j;
	long int k;
	long long int l;
	float m;

	printf("Size of char: %lu byte(s)\n", sizeof(i));
	printf("Size of int: %lu byte(s)\n", sizeof(j));
	printf("Size of long int: %lu byte(s)\n", sizeof(k));
	printf("Size of long long int: %lu byte(s)\n", sizeof(l));
	printf("Size of float: %lu byte(s)\n", sizeof(m));

	return (0);
}
