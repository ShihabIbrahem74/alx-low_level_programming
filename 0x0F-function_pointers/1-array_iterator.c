#include <stddef.h>
/**
 * array_iterator - function for alx project
 * @array: paprameter one given to the function
 * @size: parameter two givin to the function
 * @action: parameter three given to the function
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
	{
		while (array <= end)
		{
			action(*array++);
		}
	}
}
