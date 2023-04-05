
/**
 * _pow_recursion - function to power
 * @x: parameter
 * @y: parameter
 * Return: power of numbers
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 1 || y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
