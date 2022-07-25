#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create.
 * @text_content: text to write in the file
 *
 * Return: returns 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int desc, writeline, index = 0;

	if (filename == NULL)
		return (-1);
	desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (desc < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[index])
			index++;
		writeline = write(desc, text_content, index);
		if (writeline != index)
			return (-1);
	}
	close(desc);
	return (1);
}
