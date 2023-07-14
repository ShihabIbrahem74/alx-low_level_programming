#include <stdio.h>
/**
 * main - Entry point function
 * description: prints the whole alphabet
 * Return: 0 (success)
*/
int main(void)
{
	char i = 97;

	while (i <= 122)
	{
		putchar (i);
		i++;
	}
	i = 65;

	while (i <= 90)
	{
		putchar (i);
		i++;
	}
	putchar ('\n');
	return (0);
}
