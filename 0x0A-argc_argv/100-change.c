#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int i, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[2]);
		if (num < 0)
			printf("0\n");
		else
		{
			i = 0;
			while (num > 0)
			{
				if (num >= 25)
				{
					while (num >= 25)
					{ 	
						num -= 25;
						i++;
					}			

				}
				else if (num >= 10)
				{
					while (num >= 10)
					{	
						num -= 10;
						i++;
					}
					
				}
				else if (num >= 5)
				{
					while (num >= 5)
					{
						num -= 5;
						i++;
					}
					
				}
				else if (num >= 2)
				{
					while (num >= 2)
					{
						num -= 2;
						i++;
					}
					
				}
				else 
				{
					while (num >= 1)
					{
						num -= 1;
						i++;
					}
					
				}
			}
		}
	}
	printf("%d\n", i);
	return (0);
}
