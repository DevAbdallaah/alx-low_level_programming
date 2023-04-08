#include <stdlib.h>
#include <stdio.h>

/**
 * main - function
 * @argc: store count
 * @argv: store string value
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc);
		argv++;
	}
	return (0);
}
