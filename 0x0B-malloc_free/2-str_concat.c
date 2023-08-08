#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function is called ny another file called main.c
 *
 * Description: for alx project malloc
 *
 * @s1: '*s1' is a pointer recieved from another function
 * @s2: '*s2' is a pointer recieved from another function
 *
 * Return: 0 on success
 */

char *str_concat(char *s1, char *s2)
{
int size1 = 0, size2 = 0;
int i;
char *ptr;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
size1++;
for (i = 0; s2[i] != '\0'; i++)
size2++;

ptr = (char *)malloc(size1 + size2 + 1);

if (ptr == NULL)
return (NULL);

for (i = 0; i < size1; i++)
ptr[i] = s1[i];

for (i = size1; i < size1 + size2; i++)
ptr[i] = s2[i - size1];

return (ptr);
}
