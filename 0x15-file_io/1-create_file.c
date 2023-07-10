#include "main.h"

int _strlen(char *s);
/**
 * create_file - Creates a file with the specified name and
 * writes the provided text content to it.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 * Pass NULL to create an empty file.
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write "fails", etc.)
 * The created file will have permissions set to rw-------.
 * If the file already exists, permissions are not changed.
 * If filename is NULL, returns -1.
 */
int create_file(const char *filename, char *text_content)
{
	size_t len;
	ssize_t bytes;
	int file;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);

		bytes = write(file, text_content, len);
		if (bytes == -1 || (size_t)bytes != len)
		{
			close(file);
			return (-1);
		}
	}

	close(file);

	return (1);
}


/**
 * _strlen -  returns the length of a string.
 * @s: integer
 *
 * Return: returns the length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
