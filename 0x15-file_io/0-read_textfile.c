#include "main.h"

/**
 * read_textfile - func reads the txtfile and prints it to the POSIX stdout
 * @filename: file to read from
 * @letters: number of letters it should read and print
 *
 * Return: no of letters it could read and print or
 * 0 if filename is null
 * 0 if write fails or does not write the expected number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	/* check to ensure filename is not null */
	if (filename == NULL)
		return (0);
	/* allocate memory to the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (w);
}
