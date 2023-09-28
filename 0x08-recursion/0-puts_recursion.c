#include "main.h"
/**
 * _puts_recursion - takes in string to be reversed
 *@s: STRING TO BE REVERSED
 *Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
