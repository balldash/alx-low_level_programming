#include "main.h"

/**
 * read_textfile - reads file and prints to std output
 * @filename: file to read
 * @letters: size to read
 * Return: actual size read and prited
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	ssize_t n_read, n_wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	fileDescriptor = open(filename, 0_RDONLY);
	if (fileDescriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	n_read = read(fileDescriptor, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}

	n_wrote = write(STDOUT_FILENO, buffer, n_read);
	if (n_wrote == -1)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}

	close(fileDescriptor);
	return (n_read);
}
