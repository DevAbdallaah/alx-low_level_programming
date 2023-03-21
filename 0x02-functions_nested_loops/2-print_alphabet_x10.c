#include <stdio.h>
/**
 * function - print a to z
 *
 * Return: void.
 */
void print_alphabet_10(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 0; i < 10 ; i++)
{
print_alphabet_10();
}
return (0);
}
