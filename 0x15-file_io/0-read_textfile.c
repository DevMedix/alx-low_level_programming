#include "main.h"

/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX standard output.
 * @filename: filename The name of the file to read.
 * @letters: letters  The number of letters to read and print.
 *
 * Return: The actual number of letters read and
 * printed on success, or 0 on failure.
 * Possible failure cases include: inability to
 * open or read the file, filename is NULL,
 * write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buff;
	ssize_t Read;
	ssize_t Written;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	buff = (char *)malloc((letters + 1) * sizeof(char));
	if (buff == NULL)
	{
		fclose(file);
		return (0);
	}

	Read = fread(buff, sizeof(char), letters, file);
	Written = (Read > 0) ? write(STDOUT_FILENO, buff, Read) : 0;
	free(buff);
	fclose(file);

	return ((Read == Written) ? Written : 0);
}
