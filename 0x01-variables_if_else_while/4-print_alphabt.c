#include <stdio.h>
/**
 * main - Entry point function
 * description: prints the whole alphabet except q and e
 * Return: 0 (success)
*/
int main(void)
{
	char i = 97;

	while (i <= 122)
	{
		if (i == 101)
		{
			i++;
		}
		else if (i == 113)
		{
			i++;
		}
		else
		{
			putchar (i);
			i++;
		}

	}
	putchar ('\n');
	return (0);
}
