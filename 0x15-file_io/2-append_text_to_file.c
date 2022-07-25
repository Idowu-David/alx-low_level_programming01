#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: file to which text is appended.
 * @text_content: content to append to the file
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int desc, writeline, index = 0;

	if (filename == NULL)
		return (-1);
	desc = open(filename, O_WRONLY | O_APPEND);
	if (desc < 0)
		return (-1);
	if (text_content)
	{
		while(text_content[index])
			index++;
		writeline = write(desc, text_content, index);
		if (writeline != index)
			return (-1);
	}
	close(desc);
	return (1);
}
