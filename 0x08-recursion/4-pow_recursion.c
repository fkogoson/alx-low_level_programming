#include "main.h"
/**
 *_pow_recursion - function to return the value of x raise to the power or y
 *@x:integer to find the value raise to the power pf y
 *@y:integer to the power of 
 *Return:Always the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else 
{
return (x * _pow_recursion(x, y - 1));
}
}
