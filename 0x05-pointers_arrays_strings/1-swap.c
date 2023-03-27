/**
 * swap_int - function to swap
 * @a: is a parameter
 * @b: is a parameter
 */

void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
