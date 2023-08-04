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
printf("%d\n", argc - 1);
(void)**argv;
return 0;
}
