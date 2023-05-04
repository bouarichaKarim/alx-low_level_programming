#include "main.h"

/**
 * get_bit - gives value of bit at index
 * @index: index to give value
 * @n: number
 * Return: value at idx or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_per_byte = 8;
	unsigned int bits_in_long  = sizeof(n) * bit_per_byte;

	if (index >= bits_in_long)
		return (-1);

	return ((n >> index) & 1);
}
