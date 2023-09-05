#include "main.h"

/**
 * read_textfile - function for alx file I/O task
 * @filename: an argument
 * @letters: an argument
 *
 * Return: number bytes read/printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[buff_size * 8];
	ssize_t num;

	if (!filename || !letters)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	num = read(fd, &buffer[0], letters);
	num = write(STDOUT_FILENO, &buffer[0], num);
	close(fd);

	return (num);

}
