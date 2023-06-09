#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - function main
 * @argc: store count
 * @argv: store string value
 * Return: 0 if all digit or 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
				sum += atoi(argv[i]);
			else 
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
return (0);
}
