#include "main.h"
#include <stdio.h>

/**
 *  main - check the code
 *
 *  Return: lways 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "word";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	printf("%s\n", s + 2);
	return (0);
}
