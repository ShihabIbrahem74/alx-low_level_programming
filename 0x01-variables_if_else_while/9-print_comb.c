#include <stdio.h>
/**
 * main - Entry point function
 * description: prints numbers from 1 to 9 with space and ,
 * Return: 0 (success)
*/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i == 57)
		{
			putchar('\n');
		}
		else
		{
			putchar(' ');
			putchar(',');
		}
		i++;
	}
	return (0);
}
