#include <stdlib.h>
#include <stdio.h>

/**
 * main - function
 * @argc: store count
 * @argv: store string value
 * Return: 0 if it has two argument or 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		sum *= atoi(argv[i]);
		printf("%d\n", sum);
		return (0);
	}
}
