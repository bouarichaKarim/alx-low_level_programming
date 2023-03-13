#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 *
 * @size: the size of the array.
 * @char: the character to initialiae the array.
 *
 * Return: null if size=0 , pointer of null if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (null);
	cr = malloc(sizeof(c) * size);
	if (cr == null)
	return (null);
	for (i = 0; i < size; i++)
	cr[i] = c;

	return (cr);
}
