#include <unistd.h>
#include <string.h>

/**
 * main - The entry points
 * Description:it prints a quote
 * Return: 1 (success)
*/

int main(void)
{
	char i[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, i, strlen(i));
	return (1);
}
