#include <stdio.h>
/**
 * main - Entry point function
 * description: prints combinition of numbers
 * Return: 0 (success)
*/
int main(void)
{
	int x = 48;
	int z = 48;

	while (x <= 57)
	{
		for (z = 48; z <= 57; z++)
		{
			if (x < z)
			{
				putchar(x);
				putchar(z);
				if (x >= 56)
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
		x++;
	}
	return (0);
}
