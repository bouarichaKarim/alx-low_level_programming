/**
 * swap_int - Function that swaps the values of two integers.
 * @a: first int parametre.
 * @b: seconde int parametre.
 * Return: Nothing.
 */
vois swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
