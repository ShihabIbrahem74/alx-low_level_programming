#include <stdio.h>
#include <stdlib.h>

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
int x;
int f = 0;

if (argc != 2)
return (printf("Error\n"), 1);
x = atoi(argv[1]);
if (x < 0)
printf("0\n");
else
{
while (x >= 25)
{
x = x - 25;
f++;
}
while (x >= 10)
{
x = x - 10;
f++;
}
while (x >= 5)
{
x = x - 5;
f++;
}
while (x >= 2)
{
x = x - 2;
f++;
}
while (x >= 1)
{
x = x - 1;
f++;
}
printf("%d\n", f);
}
return (0);
}
