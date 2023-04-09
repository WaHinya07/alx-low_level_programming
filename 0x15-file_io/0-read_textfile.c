#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: Pointer to the string containing the file to be read
 * @letters: Number of alphabets  to be read and printed
 * Return: the actual number of letters it could read and print
 * if file canot open and filename is null, 0
 * 0, if write fails and actual number of bytes is not written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fp, bytes_written, bytes_read;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	if (!filename)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		return (0);
	}
	bytes_read = read(fp, buff, letters);
	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	close(fp);

	return (bytes_written);
}

