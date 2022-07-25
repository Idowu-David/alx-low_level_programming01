#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: (i.) The actual number of letters it could read and print
 * (ii.) if filename is NULL return 0
 * (iii.) if write fails and does not write the expected
 * amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int desc, readline, writeline;
	char *buffer;

	if (filename == NULL)
		return (0);
	desc = open(filename, O_RDONLY);
	if (desc < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	readline = read(desc, buffer, letters);
	if (readline < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[readline] = '\0';
	close(desc);
	writeline =  write(STDOUT_FILENO, buffer, readline);
	if (writeline < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (writeline);
}
