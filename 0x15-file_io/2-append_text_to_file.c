#include "main.h"

/**
 * append_text_to_file - appends text to the end of a line
 * @filename: name of the file to append the contents from
 * @text_content: the string to be appended to the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_APPEND | O_WRONLY);
	if (o == -1)
		return (-1);
	if (o != -1 && text_content == NULL)
	{
		close(o);
		return (1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	w = write(o, text_content, len);
	if (w == -1)
		return (-1);

	close(o);

	return (1);
}
