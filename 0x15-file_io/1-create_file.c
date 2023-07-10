#include "main.h"

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
	size_t length;
	ssize_t written;
	int file;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);

		written = write(file, text_content, length);
		if (written == -1 || (size_t)written != length)
		{
			close(file);
			return (-1);
		}
	}

	close(file);

	return (1);
}
