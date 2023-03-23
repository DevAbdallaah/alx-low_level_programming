#include "main.h"
#include <stdlib.h>

void print_to_98(int n)
{
int i;	
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (n < 0)
{
i = abs(i);	
if (i < 10 )
{	
_putchar('-');	
_putchar(i + '0');	
}
else  
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
}
else
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
if (i == 98)
{	
_putchar(' ');
}
else
{
_putchar(',');	
_putchar(' ');	
}	
}
}

else
{
for (i = n; i >=98; i--)
{
int a;
int b;
if (i >= 100)
{	
a = i % 10;
b = i / 10;
_putchar(b / 10 + '0');
_putchar(b % 10 + '0');
_putchar(a + '0');
}
else
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
if (i == 98)
{
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
}
}		
}
_putchar('\n');
}
