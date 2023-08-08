#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function is called ny another file called main.c
 *
 * Description: for alx project malloc
 *
 * @grid: '*s1' is a pointer recieved from another function
 * @height: '*s2' is a pointer recieved from another function
 *
 * Return: 0 on success
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
