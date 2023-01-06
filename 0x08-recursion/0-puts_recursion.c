#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
_puts_recursion("Puts with recursion");
return (0);
}

/**
 * _puts_recursion - a function to print a string
 *@s: string to print
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
printf("%c", *s);
_puts_recursion(s + 1);
}
}
