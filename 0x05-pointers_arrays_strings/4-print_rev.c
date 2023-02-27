#include "main.h"
/**
 * print_rev - function that pints a string in reverse
 * followed by a new line.
 * @s: parametre char to print.
 * Return: print char s.
 */
void print_rev(char *s)
{
	int size = _strlen(s);
	int i = 0;

	for (i = size - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
