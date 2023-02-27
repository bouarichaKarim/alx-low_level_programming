#include "main.h"
/**
 * _puts - function that prints a string followed by a new line
 * too stdout
 * @str: string will be printed.
 * Return: print string str.
 */
void _puts(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}
}
