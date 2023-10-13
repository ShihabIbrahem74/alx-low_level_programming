#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - function for alx tasks
 * @argc: an argument
 * @argv: an argument
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pass[7], *code;
	int length = strlen(argv[1]), i, temp;

	code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	temp = (length ^ 59) & 63;
	pass[0] = code[temp];
	temp = 0;
	for (i = 0; i < length; i++)
		temp += argv[1][i];
	pass[1] = code[(temp ^ 79) & 63];
	temp = 1;
	for (i = 0; i < length; i++)
		temp *= argv[1][i];
	pass[2] = code[(temp ^ 85) & 63];
	temp = 0;
	for (i = 0; i < length; i++)
	{
		if (argv[1][i] > temp)
			temp = argv[1][i];
	}
	srand(temp ^ 14);
	pass[3] = code[rand() & 63];
	temp = 0;
	for (i = 0; i < length; i++)
		temp += (argv[1][i] * argv[1][i]);
	pass[4] = code[(temp ^ 239) & 63];
	for (i = 0; i < argv[1][0]; i++)
		temp = rand();
	pass[5] = code[(temp ^ 229) & 63];
	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}
