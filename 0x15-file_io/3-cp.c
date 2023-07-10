#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void close_fd_from_to(int fd);
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int fd_from, fd_to, n;

	if (argc <= 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((n = read(fd_from, buffer, 1024)) > 0)
	{
		write(fd_to, buffer, n);
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		close_fd_from_to(fd_from);
	}
	if (close(fd_to) == -1)
	{
		close_fd_from_to(fd_to);
	}
	return (0);
}

/**
 * close_fd_from_to - closes the argument in the terminal
 * @fd: parameter
 *
 * Return: void
 */
void close_fd_from_to(int fd)
{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
}
