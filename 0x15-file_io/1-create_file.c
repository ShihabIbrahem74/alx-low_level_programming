#include "main.h"
/**
 * _strlen - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @s: '*s' is a pointer
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
int len = 0;
while (s[len] != 0)
len++;
return (len);
}

/**
 * create_file - function for alx file I/O task
 * @filename: an argument
 * @text_content: an argument
 *
 * Return: number bytes read/printed
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t flag = 0;
	ssize_t len = _strlen(text_content);

	if (!filename)
	return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);

	if (len)
	flag = write(fd, text_content, len);
	close(fd);
	if (flag == len)
	return (1);
	else
	return (-1);
}
