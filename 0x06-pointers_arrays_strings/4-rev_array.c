#include "main.h"
#include <string.h>

/**
 * reverse_array - function to reverse int
 * @a: int array
 * @n: numbers to return
 * Return: 0 always
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int temp;

	while (start < n - 1)
	{
		temp = a[start];
		a[start] = a[n - 1];
		a[n - 1] = temp;
		n--;
		start++;
	}
}
