#include "main.h"
#include <stdio.h>

/**
 * rev_string - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @s: '*str' is a pointer
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
int start = 0;
int end = 0;
while (s[end] != 0)
end++;
end--;
while (start != end)
{
s[start] = s[start] ^ s[end];
s[end] = s[start] ^ s[end];
s[start] = s[start] ^ s[end];
start++;
end--;
}
}
