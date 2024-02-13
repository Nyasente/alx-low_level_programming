#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads the poem and print it
 * @filename: textfile to be read
 * @letters: numbers of letters
 * Return: w - actual niumber of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buffer;
	ssize_t file_d;
	ssize_t lenw;
	ssize_t lenr;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	lenr = read(file_d, buffer, letters);
	lenw = write(STDOUT_FILENO, buffer, lenr);

	free(buffer);
	close(file_d);
	return (lenw);
}

