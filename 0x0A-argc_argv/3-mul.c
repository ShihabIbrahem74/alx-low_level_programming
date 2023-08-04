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

int x, y;

if (argc == 3)
{
x = atoi(argv[1]);
y = atoi(argv[2]);
printf("%d\n", x *y);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
