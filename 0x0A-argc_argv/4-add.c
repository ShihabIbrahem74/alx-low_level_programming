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
char *c;

while (--argc)
{
for (c = argv[argc]; *c; c++)
if (*c < '0' || *c > '9')
{
printf("Error\n");
return (1);
}
sum += atoi(argv[argc]);
}
printf("%d\n", sum);
return (0);
}
