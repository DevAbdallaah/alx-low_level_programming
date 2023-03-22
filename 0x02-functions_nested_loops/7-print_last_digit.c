#include "main.h"
#include <stdlib.h>
/**
 *print_last_digit - function print the last digit
 * @n: is the parameter
 * Return: last digit
 */


int print_last_digit(int n)
{
int last;
n = abs(n);
last = n % 10;
return (last);
}
