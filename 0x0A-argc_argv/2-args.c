#include <stdlib.h>
#include <stdio.h>

/**
 * main - function main
 * @argc: store count
 * @argv: store string values
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
