#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: Null terminated string to the end of the file
 * Description: if no content is available, do not create an empty file
 * Return: If filename is NULL return -1,
 * 1 if the file exists and -1 if the file does not exist or no permissions
 * 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, byte_num;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (!text_content || !text_content[0])
	{
		return (1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
	{
		return (-1);
	}
	for (len = 0; text_content[len];)
		len++;

	byte_num = write(fd, text_content, len);

	if (byte_num < 0)
	{
		return (-1);
	}
	close(fd);

	return (1);
}
