#include "main.h"
#include "ctype.h"

/**
 * _isdigit - function determines upper case letters
 * @c: is the parameter
 * Return: 1 if digit
 *         0 otherwise
 */

int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
