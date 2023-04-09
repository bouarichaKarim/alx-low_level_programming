#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary
 *
 * Return: no return.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		prin_binary(n >> 1);

	_putchar((n & 1) + '0');
}
