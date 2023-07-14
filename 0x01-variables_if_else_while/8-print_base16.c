#include <stdio.h>
/**
 * main - Entry point function
 * description: prints all the numbers of base 16
 * Return: 0 (success)
*/
int main(void)
{
	char i = 48;

	while (i <= 57)
	{
		putchar (i);
		i++;
	}
	i = 97;

	while (i <= 102)
	{
		putchar (i);
		i++;
	}
	putchar ('\n');
	return (0);
}
