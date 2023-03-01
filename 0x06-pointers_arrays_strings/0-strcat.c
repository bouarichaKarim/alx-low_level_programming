#include "main.h"
/**
 * _strcat - function that concatenates two stringd.
 * @dest: parametre of destination char.
 * @src: parametre of source char.
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int countD = 0, countS = 0;

	while (*(dest + countD) != '\0')
	{
		countD++;
	}

	while (countS >= 0)
	{
		*(dest + countD) = *(src + countS);
		if (*(src + countS) == '\0')
		{
			break;
		}
		countD++;
		countS++;
	}
	return (dest);
}
