#include "main.h"
#include <stdio.h>

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content written in the file created.
 *
 * Return: 1 if it is successful, -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int cd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	cd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (cd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(cd, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(cd);

	return (1);
}
