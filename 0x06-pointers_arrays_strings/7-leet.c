#include "main.h"
/**
 * leet - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @str: '*str' is a pointer
 *
 * Return: Always 0.
 */
char *leet(char *str)
{
char *letters = "aAeEoOtTlL";
char *numbers = "4433007711";
int x = 0;
int y = 0;

while (str[y] != 0)
{
for (x = 0; x < 10; x++)
{
if (str[y] == letters[x])
str[y] = numbers[x];
}
y++;
}
return (str);
}
