#include "main.h"
#include <ctype.h>
/**
 *  _isalpha - function to print lower case
 *  @c: is the parameter
 *
 *  Return: 1 when c is alphabet either upper or lower case
 *  and 0 otherwise
 */

int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
return (0);
}
