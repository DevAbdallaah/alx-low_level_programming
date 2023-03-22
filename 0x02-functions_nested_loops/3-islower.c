#include "main.h"
#include <ctype.h>
/**
 *  _islower - function to print lower case
 *  @c: is the parameter
 *
 *  Return: 1 when c is lower
 *  and 0 otherwise
 */

int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
return (0);
}
