
int _sqrt_recursion(int n)
{
	int i;
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	
	for (i = 0; i < n / 2; i++)
	{
		if (i * i == n)
			return (i);
		if (i * i > n)
			return (-1);
	}
	return (-1);
}
