#include <stdio.h>
/**
 * main - Entry point function
 * description: prints numbers from 1 to 10
 * Return: 0 (success)
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar ('\n');
	return (0);
}
