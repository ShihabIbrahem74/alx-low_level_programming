/**
 * int_index - function for alx project
 * @array: name of the person
 * @size: pointer to function
 * @cmp: pointer to function
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int *end = array + size - 1;
	int counter = 0;

	if (array && size && cmp)
	{
		while (array <= end)
		{
			if (cmp(*array++))
			return (counter);
			counter++;
		}
		return (-1);
	}
	else
	{
		return (-1);
	}
}
