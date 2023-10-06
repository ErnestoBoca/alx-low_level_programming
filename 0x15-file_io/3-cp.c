#include "main.h"

/**
 * error_exit - prints a formated error message
 * @code: the extit code
 * @format: the error message
 * Return: nothing
 */
void error_exit(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);

	exit(code);
}

/**
 * main - copies the content of a file to another file.
 * @argc: the number of arguments passed
 * @argv: an array of arguments
 * Return: 0 (default)
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	int fd_source, fd_dest;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from_to\n");

	file_from = argv[1];
	file_to = argv[2];

	fd_source = open(file_from, O_RDONLY);
	if (fd_source == -1)
		error_exit(98, "Error: Can't read from %s\n", file_from);

	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_dest == -1)
		error_exit(99, "Error: Can't write to %s\n", file_to);

	bytes_read = read(fd_source, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit(99, "Error: Can't write to %s\n", file_to);
		bytes_read = read(fd_source, buffer, BUFFER_SIZE);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Cant't read from %s\n", file_from);
	if (close(fd_source) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_source);
	if (close(fd_dest) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_dest);
	return (0);
}
