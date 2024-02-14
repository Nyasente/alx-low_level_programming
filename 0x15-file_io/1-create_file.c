#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - file to contain contents
 * @filename: pointer to filename
 * @text_content: content writtten on file
 *
 * Return: 1 on success, on failure return -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, lenr = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (lenr = 0; text_content[lenr];)
		lenr++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
			w = write(fd, text_content, lenr);
			if (w == -1 || fd == -1)
			return (-1);
			close(fd);
			return (1);
}
