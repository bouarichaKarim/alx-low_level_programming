#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: the pointer to s.
 */
char *rot13(char *s)
{
	int count = 0, i;
	char alphabet[] = "";
	char rot13[] = "";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(s + count) = rot[i];
			}
			count++;
		}
	}
	return (s);
}