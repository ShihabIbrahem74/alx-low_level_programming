#include<stdio.h>
#include<stdlib.h>
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
int sum = 0;
int i, x;

for (i = 0; i < argc - 1; i++)
{
x = atoi(argv[i + 1]);
if (x <= 0 && *argv[i + 1] != '0')
{
printf("Error\n");
return (1);
}
else
sum += x;
}
printf("%d\n", sum);
return (0);
}
