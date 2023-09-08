#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to be written to file
 *
 * Return: On success -> 1, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int file, file_w, text_len = 0, idx = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	/* Find text len */
	if (text_content != NULL)
	{
		while (text_content[idx] == '\0')
		{
			text_len++;
			idx++;
		}
	}

	/* Create file */
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	file_w = write(file, text_content, text_len);

	/* Error handling */
	if (file == -1 || file_w == -1)
	{
		return (-1);
	}

	close(file);

	return (1);
}
