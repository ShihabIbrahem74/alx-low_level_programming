/**
 * print_name - function for alx project
 * @name: name of the person
 * @f: pointer to function
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (*name != '\0' && f)
	{
		f(name);
	}
}
