#include "main.h"

/**
 * _isdigit - checks if parametr is a digit.
 *  @c: input number
 *  Return: 1 if is a digit, 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
