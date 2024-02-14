#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file -function to append the text to a file
 * @filename:  name of the file to append to
 * @text_content: content to be written on append
 * Return: 1 if file exists, -1 if file not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, a, lenw = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[lenw] != '\0')
			lenw++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);
	a = write(fd, text_content, lenw);
	close(fd);
	if (a == -1)
		return (-1);

	return (1);
}
