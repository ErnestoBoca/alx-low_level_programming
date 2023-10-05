#include "main.h"
#include "main.h"
/**
 * _strlen - calculates the length of a string.
 * @s: the pointer to the string
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int i, len;

	i = *s;
	len = 0;
	while (i != '\0')
	{
		len++;
		i = *(s + len);
	}
	return (len);
}

/**
 * create_file -  creates a file.
 * @filename: is the name of the file to create
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return  (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, _strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
