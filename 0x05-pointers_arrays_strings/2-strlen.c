/**
 * _strlen - function that returns the lenght of a string.
 * @s: parametre char to calculate the lenght.
 * Return: the lenght of a string.
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
