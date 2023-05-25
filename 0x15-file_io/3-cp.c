#include "main.h"
#define BUFFER_SIZE 1024

void copyFile(char *fileFrom, char *fileTo);
int openFile(char *filename, int flags, int exitCode);
void handle_error(char *message, int exitCode);

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		handle_error("Usage: cp file_from file_to", 97);
	copyFile(argv[1], argv[2]);
	return (0);
}

/**
 * handle_error - Handles an error by printing the error
 * message and exiting with the given exit code.
 *
 * @message: The error message to print.
 * @exitCode: The exit code to use when exiting the program.
 * Return: void
 */
void handle_error(char *message, int exitCode)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exitCode);
}

/**
 * openFile - Opens a file with the specified flags
 * and returns the file descriptor.
 *
 * @filename: The name of the file to open.
 * @flags: The flags to use for opening the file.
 * @exitCode: The exit code to use if opening the file fails.
 * Return: The file descriptor of the opened file.
 */
int openFile(char *filename, int flags, int exitCode)
{
	int file = open(filename, flags);

	if (file == -1)
		handle_error(filename, exitCode);
	return (file);
}

/**
 * copyFile - Copies the content from one file to another file.
 *
 * @fileFrom: The name of the source file.
 * @fileTo: The name of the destination file.
 * Return: void
 */
void copyFile(char *fileFrom, char *fileTo)
{
	int sourceFile = openFile(fileFrom, O_RDONLY, 98);
	int destinationFile = openFile(fileTo, O_WRONLY | O_CREAT | O_TRUNC, 99);

	char buffer[BUFFER_SIZE];
	ssize_t bytesRead, bytesWritten;

	while ((bytesRead = read(sourceFile, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(destinationFile, buffer, bytesRead);
		if (bytesWritten == -1)
			handle_error(fileTo, 99);
	}

	if (bytesRead == -1)
		handle_error(fileFrom, 98);

	close(sourceFile);
	close(destinationFile);
}
