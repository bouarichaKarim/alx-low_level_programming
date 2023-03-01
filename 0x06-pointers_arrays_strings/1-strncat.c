#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: param of destination.
 * @src: param of src.
 * @n: bytes.
 *
 * Return: pointer to the esulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int countD = 0, countS = 0;

	while (*(dest + countD) != '\0')
	{
		countD++;
	}

	for (countD; countS < n; countS++)
	{
		*(dest + countD) = *(src + countS);
		if (*(src + countS) == '\0')
			break;
		countD++;
	}
	return (dest);
}
