#include "main.h"
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to the
 *		POSIX standard output.
 * @filename: The file to be read.
 * @letters: Number of letters it should read and print
 *
 * Return: On success -> actual number of letters it could read and print
 *		On fail -> 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file, bytes_r, bytes_w;

	if (filename == NULL)
	{
		return (0);
	}

	/* Opens file with read and write permissions */
	file = open(filename, O_RDWR);

	/* Reserve memory for file contents */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	/* Read file content */
	bytes_r = read(file, buffer, letters);
	/* Write file content to stdout */
	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);

	/* Error handling */
	if (file == -1 || bytes_w == -1 || bytes_r == -1 || bytes_r != bytes_w)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file);

	return (bytes_r);
}
