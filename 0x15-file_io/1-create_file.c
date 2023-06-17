#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content written in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int fwd;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0700);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	fwd = write(fd, text_content, nletters);

	if (fwd == -1)
		return (-1);

	close(fd);

	return (1);
}
