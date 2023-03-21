#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char put[] = "_putchar";
int i = 0;
while (put[i] != '\0')
{
	putchar(put[i]);
	i++;
}
putchar('\n');
return (0);
}
