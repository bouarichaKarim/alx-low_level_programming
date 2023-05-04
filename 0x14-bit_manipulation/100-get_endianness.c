#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i_number;
	char *s;

	i_number = 1;
	s = (char *) &i_number;

	return ((int)*s);
}
