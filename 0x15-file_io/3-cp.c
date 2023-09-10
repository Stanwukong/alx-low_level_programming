#include "main.h"

/**
 * buffer - reserves memory for file content
 *
 * Return: pointer to stored string content
 */

char *buffer()
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes the process of an open file
 * @file_id: File descriptor value of the process
 *
 * Return: 0, otherwise, exits with error.
 */

int *close_file(int file_id)
{
	int _close = close(file_id);

	if (_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_id);
		exit(100);
	}

	return (0);
}

/**
 * main - copies the cotents of a file to another
 * @argc: Number of command line arguments
 * @argv: pointer to array containing args
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int origin, dest, _write, _read;
	char *_buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	origin = open(argv[1], O_RDONLY);
	_buffer = buffer(argv[2]);

	if (origin == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	_read = read(origin, _buffer, 1024);
	_write = write(dest, _buffer, _read);

	if (_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	free(_buffer);
	close_file(origin);
	close_file(dest);

	return (0);

}
