#include "main.h"

/**
 * append_text_to_file - Appends text content at the end of a file.
 *
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 * Return: Returns 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t content_len = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	while (text_content[content_len] != '\0')
		content_len++;

	bytes_written = write(file, text_content, content_len);
	close(file);

	if (bytes_written == -1 || bytes_written != content_len)
		return (-1);
	return (1);
}
