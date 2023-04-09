#include "main.h"

/**
 * binary_to_int - convert a binary number to an unsigned int.
 * @b: pointer to str of 0 and 1 chars.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	result = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		else
			result = (result << 1) + (*b - '0');

		b++;
	}

	return (result);
}
