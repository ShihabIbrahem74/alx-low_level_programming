#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define ALL (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

int main(int argc, char **argv)
{
	int source_fd = 0, target_fd = 0;
	ssize_t bytes;
	char buffer[buff_size];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

	target_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, ALL);
	if (target_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);

	while ((bytes = read(source_fd, buffer, buff_size)) > 0)
		if (write(target_fd, buffer, bytes) != bytes)
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);

	if (bytes == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

	source_fd = close(source_fd);
	target_fd = close(target_fd);

	if (source_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, source_fd), exit(100);
	if (target_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, target_fd), exit(100);

	return (EXIT_SUCCESS);
}
