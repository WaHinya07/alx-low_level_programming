#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_file - Function that creates a file
 * @filename: The name of the file to be created
 * @text_content: Null terminated string to be written in the file
 * Description: The created file must have those permissions: rw-------
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	bytes_written = write(fd, text_content, len);

	if (fd == -1 || bytes_written == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
