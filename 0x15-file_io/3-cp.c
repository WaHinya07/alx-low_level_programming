#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * define_buffer - creates and defines 1024 buffer
 * @filename: pointer to the name of the file the buffer will be used for
 * Return: Pointer to the created buffer
 */
char *define_buffer(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * (1024));

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}
/**
 * close - closes a file descriptor
 * @fd: The file descriptors to be closed
 * Return: 0 upon succes and preset value upon failure
 */
int close(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
/**
 * main - Entry point
 * @argc: number of arguments to be considered
 * @argv: argument values
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char *buff;
	int bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = define_buffer(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	bytes_read = read(fd_from, buff, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_from == -1 || bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buff);
		exit(98);
	}
	bytes_written = write(fd_to, buff, bytes_read);

	if (fd_to == -1 || bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}
	bytes_read = (fd_from, buff, 1024);
	fd_to = open(argv[2], O_WRONLY | O_APPEND);

	while (bytes_read > 0)
	{
		free(buff);
		close(fd_from);
		close(fd_to);
	}
	return (0);
}
