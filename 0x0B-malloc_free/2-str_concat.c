#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first param.
 * @s2: second param.
 *
 * Return: pointer otherwise null if failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	;

	for (j = 0; s2[j] != '\0'; j++)
	;

	strout = malloc(sizeof(char) * (i + j + 1));
	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	limit = i;
	for (k = 0; k < limit; k++)
	strout[k] = s1[k];

	limit = j + 1;
	for (j = 0; j < limit; j++)
	{
		strout[k] = s2[j];
		k++;
	}

	return (strout);
}
