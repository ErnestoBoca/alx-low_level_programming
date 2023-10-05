#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: the name of the file we want to read
 * @letters:  the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	if (filename == NULL)
		return (0);

	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
	{
		close(fd);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, letters);
	if (bytesWritten == -1)
	{
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (bytesRead);
}
