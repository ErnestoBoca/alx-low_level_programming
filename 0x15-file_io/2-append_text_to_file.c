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
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file to create
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * Do not create the file if it does not exist
 * if filename is NULL return -1
 * if text_content is NULL, do not add anything to the file
 * Return 1 if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return  (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, _strlen(text_content));
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
