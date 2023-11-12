#include "main.h"

/**
 * create_file - funtion that creates a file
 * @filename: the name of the file to be created
 * @text_content: the contents to be inserted into the new file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t o, w;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (o == -1)
		return (-1);
	if (text_content != NULL)
	{
		w = write(o, text_content, strlen(text_content));

		if (w == -1)
		{
			close(o);
			return (-1);
		}
	}

	close(o);

	return (1);
}
