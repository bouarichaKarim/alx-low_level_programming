/**
 * _puts - function that prints a string followed by a new line
 * too stdout
 * @str: string will be printed.
 * Return: print string str.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
