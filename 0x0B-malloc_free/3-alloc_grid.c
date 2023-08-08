#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function is called ny another file called main.c
 *
 * Description: for alx project malloc
 *
 * @width: '*s1' is a pointer recieved from another function
 * @height: '*s2' is a pointer recieved from another function
 *
 * Return: 0 on success
 */

int **alloc_grid(int width, int height)
{
int **ptr;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);

ptr = (int **)malloc(height * sizeof(int *));
if (ptr == NULL)
	return (NULL);
for (i = 0; i < height; i++)
{
ptr[i] = (int *)malloc(width * sizeof(int));
if (ptr[i] == NULL)
	return (NULL);
for (j = 0; j < width; j++)
{
ptr[i][j] = 0;
}
}
return (ptr);
}
