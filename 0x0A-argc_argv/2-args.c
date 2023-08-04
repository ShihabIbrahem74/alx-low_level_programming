#include<stdio.h>
/**
 * main - fucntion to print the file name
 *
 * Description: function to do task for alx
 *
 * @argc: 'argc' is an integer
 * @argv: '**argv' is a pointer to array
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{

int i;

for (i = 0; i < argc - 1; i++)
printf("%s\n", argv[i + 1]);
return (0);
}
