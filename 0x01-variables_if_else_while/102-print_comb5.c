#include <stdio.h>
/**
 * main - Entry point function
 * Description: Prints combinations of numbers
 * Return: 0 (success)
 */
int main(void)
{
	int a1 = 48;
	int a2 = 48;
	int b1 = 48;
	int b2 = 48;

	for (a1 = 48; a1 <= 57; a1++)
	{
		for (a2 = 48; a2 <= 57; a2++)
		{
		for (b1 = 48; b1 <= 57; b1++)
		{
		for (b2 = 48; b2 <= 57; b2++)
		{
			if (a1 < b1 || (a1 == b1 && a2 < b2))
			{
				putchar(a1);
				putchar(a2);
				putchar(' ');
				putchar(b1);
				putchar(b2);
				if (a1 != 57 || a2 != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		}
		}
	}
	putchar ('\n');
	return (0);
}
