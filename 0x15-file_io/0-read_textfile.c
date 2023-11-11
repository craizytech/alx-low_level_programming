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
	int fd, num;
	size_t output;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* open the file using open sys call */
	fd = open(filename, O_RDONLY, 0777);

	/* check of the file was opened successfully */
	if (fd == -1)
		return (0);
	/* allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);

	/* read the contents of the file to a tmp buffer */
	output = read(fd, buffer, letters);

	/* write to starndard output */
	num = write(1, buffer, output);
	if (num == -1)
		return (0);

	free(buffer);
	return (output);
}
