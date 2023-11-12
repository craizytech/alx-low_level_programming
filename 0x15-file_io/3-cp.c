#include "main.h"

/**
 * main - copies the content of 1 file to another
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file1, file2;
	char *buffer;

	

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	file2 = open(arv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w = (file2, file1);

	if (file2 == -1 || w == -1)
	{
		write(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (close(file1) == -1)
	{
		write(STDERR_FILENO, "Error: Can't close fd %d", file1);
		exit(100);
	}
	if (close(file2) == -1)
	{
		write(STDERR_FILENO, "Error: Can't close fd %d", file2);
		exit(100);
	}
	return (0);
}

