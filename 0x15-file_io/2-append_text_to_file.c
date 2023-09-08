#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append text.
 * @text_content: string to append at the end of the file
 *
 * Return: On success -> 1, otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, file_appnd, idx = 0, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	/* Find length of text_content */
	while (text_content[idx] != '\0')
	{
		len++;
		idx++;
	}

	/* Open file in append mode */
	file = open(filename, O_RDWR | O_APPEND);

	/* Append text_content */
	file_appnd = write(file, text_content, len);

	/* Error handling */
	if (file == -1 || file_appnd == -1)
	{
		return (-1);
	}

	close(file);


	return (1);
}
