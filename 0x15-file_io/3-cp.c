#include "main.h"

void close_file(int fd);
/**
 * main - copies the content of 1 file to another
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file1, file2, w, r;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file1 = open(argv[1], O_RDONLY);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	r = read(file1, buffer, 1024);

	do {
		if (file1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n",
					argv[1]);
			exit(98);
		}

		w = write(file2, buffer, r);

		if (file2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		r = read(file1, buffer, 1024);
		file2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	close_file(file1);
	close_file(file2);

	return (0);
}
/**
 * close_file - closes an open file
 * @fd: file descriptor of the open file
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
