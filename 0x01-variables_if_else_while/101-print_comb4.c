#include <stdio.h>
/**
 * main - Entry point function
 * Description: Prints combinations of numbers
 * Return: 0 (success)
 */
int main(void)
{
	int x = 48;
	int z = 48;
	int y = 48;

	while (x <= 57)
	{
	for (z = 48; z <= 57; z++)
	{
		if (x < z)
		{
			for (y = 48; y <= 57; y++)
			{
				if (z < y)
				{
					putchar(x);
					putchar(z);
					putchar(y);
					if (x >= 55)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	x++;
	}
	return (0);
}
