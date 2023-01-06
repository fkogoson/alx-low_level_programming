#include "main.h"

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
/*printf("%c", *s);*/
_putchar(*s);
/*_putchar('\n');*/
_puts_recursion(s + 1);
}
}
