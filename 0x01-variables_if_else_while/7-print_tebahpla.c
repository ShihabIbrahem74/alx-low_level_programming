#include <stdio.h>
/**
 * main - Entry point function
 * description: prints the whole alphabet in reverse
 * Return: 0 (success)
*/
int main(void)
{
	char i = 122;

	while (i >= 97)
	{
		putchar (i);
		i--;
	}
	putchar ('\n');
	return (0);
}
