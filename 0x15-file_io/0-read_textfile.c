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
	if (filename == NULL)
		return (0);

	/* open the file using open sys call */
	int file_descriptor = open(filename, 0_RDONLY);

	/* check of the file was opened successfully */
	if (file_descriptor == -1)
		return (0);

	output = write(STDOUT_FILENO, filename, letters);

	if (output == -1)
		return (0);
	
	return (output);
}
